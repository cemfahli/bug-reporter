#include <iostream>
#include <fstream>
#include <string>
#include <chrono>
#include <ctime>
#include "bugreport.pb.h"

void fill_report(tracker::Report* report, std::string application) {
	report->set_application(application);

	std::cout << "Enter any information you can about the issue you are having: \n";
	std::string information;
	std::getline(std::cin, information);
	report->set_information(information);

	int severity = 0;
	while(severity < 1 || severity > 3) {
		std::cout << "Enter the Number Corresponding to the Severity of the Issue: \n"
				<< "1. LOW\n"
				<< "2. MED\n"
				<< "3. HIGH" << std::endl;
		std::cin >> severity;
	}
	if(severity == 1) report->set_severity("LOW");
	else if(severity == 2) report->set_severity("MED");
	else report->set_severity("HIGH");

	report->set_status("OPEN");

	std::chrono::system_clock::time_point tp = std::chrono::system_clock::now();
	std::time_t tt = std::chrono::system_clock::to_time_t(tp);
	report->set_time(std::ctime(&tt));

	std::cout << "Thank You" << std::endl;
}

int main(int argc, char* argv[]) {
	GOOGLE_PROTOBUF_VERIFY_VERSION;

	if(argc != 3) {
		std::cout << "Please format Command Line Arguments as Follows: " << 
			argv[0] << " BUG_REPORTS_FILE APPLICATION_NAME" << std::endl;
		return -1;
	}

	tracker::Bug_tracker bugtracker;
	std::string application = argv[2];

	std::fstream input(argv[1], std::ios::in | std::ios::binary);
	if(!input) {
		std::cout << argv[1] << " File Not Found. Creating a new file." << std::endl;
	}
	else if(!bugtracker.ParseFromIstream(&input)) {
		std::cout << "Failed to parse bug tracker" << std::endl;
		return -1;
	}
	
	fill_report(bugtracker.add_reports(), application);
	
	std::fstream output(argv[1], std::ios::out | std::ios::trunc | std::ios::binary);
	if(!bugtracker.SerializeToOstream(&output)) {
		std::cout << "Failed to write to bug tracker" << std::endl;
		return -1;
	}
	
	input.close();
	output.close();
}
