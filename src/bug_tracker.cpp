#include <iostream>
#include <fstream>
#include <string>
#include "bugreport.pb.h"

void list_reports(const tracker::Bug_tracker& bug_tracker) {
	for(int i = 0; i < bug_tracker.reports_size(); i++) {
		const tracker::Report& report = bug_tracker.reports(i);

		std::cout << '\n' << i << ". \n";
		std::cout << "Application: " << report.application() << '\n';
		std::cout << "Status: " << report.status() << '\n';
		std::cout << "Information: " << report.information() << '\n';
		std::cout << "Time: " << report.time() << '\n';
		std::cout << "Severity: " << report.severity() << '\n' << std::endl;

	}
}

void edit_reports(tracker::Bug_tracker& bug_tracker) {
	while(true) {
		int answer1;

		list_reports(bug_tracker);
		std::cout << "\nEnter the Number Next to the Report You Wish to Edit, or -1 to Exit: \n";
		std::cin >> answer1;

		if(answer1 == -1) break;
		else if(answer1 >= bug_tracker.reports_size()) {
			std::cout << "Invalid entry." << std::endl;
			continue;
		}
		else {
			int answer2;
			tracker::Report* report = bug_tracker.mutable_reports(answer1);
			std::cout << "\nEnter the number next to the option you wish to select: \n"
					<< "0. Cancel.\n"
					<< "1. Edit Severity of Report.\n"
					<< "2. Edit Status of Report." << std::endl;
			std::cin >> answer2;

			if(answer2 == 0) continue;
			else if(answer2 == 1) {
				int severity = 0;

				while(severity < 1 || severity > 3) {
					std::cout << "\nCurrently, the Severity of the report is: " << report->severity() << '\n';
					std::cout << "Enter the Number Next to the Severity of the Report:\n" 
						<< "1. LOW\n"
						<< "2. MED\n"
						<< "3. HIGH\n" << std::endl;
					std::cin >> severity;
				}

				if(severity == 1) report->set_severity("LOW");
				if(severity == 2) report->set_severity("MED");
				if(severity == 3) report->set_severity("HIGH");
			}
			else if(answer2 == 2) {
				int status = 0;

				while(status < 1 || status > 2) {
					std::cout << "\nCurrently, the report is " << report->status() << '\n';
					std::cout << "Enter the Number Next to the Status of the Report: \n" 
						<< "1. OPEN\n"
						<< "2. CLOSED\n" << std::endl;
					std::cin >> status;
				}

				if(status == 1) report->set_status("OPEN");
				else report->set_status("CLOSED");
			}
		}	
	}
}
		

int main(int argc, char* argv[]) {
	GOOGLE_PROTOBUF_VERIFY_VERSION;

	if(argc != 2) {
		std::cout << "Please format arguments as such: " << argv[0] << " BUG_REPORTS_FILE" << std::endl;
		return -1;
	}
	
	tracker::Bug_tracker bt;

	std::fstream input(argv[1], std::ios::in | std::ios::binary);
	if(!bt.ParseFromIstream(&input)) {
		std::cout << "Failed to parse bug reports" << std::endl;
		return -1;
	}

	while(true) {
		short answer;
		std::cout << "\nEnter the Number Next to Your Intended Action: \n"
				<< "1. Edit Bug Reports\n"
				<< "2. List All Bug Reports\n"
				<< "3. Exit" << std::endl;
		std::cin >> answer;
		if(answer == 3) break;
		else if(answer == 2) list_reports(bt);
		else if(answer == 1) {
			edit_reports(bt);

			std::fstream output(argv[1], std::ios::out | std::ios::trunc | std::ios::binary);
			if(!bt.SerializeToOstream(&output)){
				std::cout << "Failed to write to Bug Tracker" << std::endl;
				return -1;
			}

			output.close();
			break;
		}
	}

	input.close();
	return 0;
}
