#include "main.hpp"

#include <iostream>

#include <glog/logging.h>

int main(int argc, char *argv[])
{
	Hi::Hello hello;
	google::InitGoogleLogging(argv[0]);

	int num_cookies {5};

	std::cout << "Usage: " << argv[0] << std::endl;

	LOG(INFO) << "Found " << num_cookies << " cookies";

	return 0;
}
