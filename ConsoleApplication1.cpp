#include <iostream>
#include <ctime>
#include <vector>  
#include <string>
#include <algorithm>

	std::string toLower(std::string s) {
		std::transform(s.begin(), s.end(), s.begin(), ::tolower);
		return s;
	}
	int main()
	{
		std::vector<std::string> v;
			std::cout << "Enter no or exit to exit: " << std::endl;
			std::cout << "..." << std::endl;
			std::cout << "Enter what do you need to do?" << std::endl;
			std::cout << "..." << std::endl;

		while (true) 
		{
			std::string input;
			std::getline(std::cin, input);


			if (toLower(input) == "no" || toLower(input) == "exit")
			{
				if (v.empty()) {
					std::cout << "You didn't enter anything." << std::endl;
					return 0;
				}
				std::cout << "Here's the list..." << std::endl;
				for (std::string str : v) {
					std::cout << str << std::endl;
				}
					return 0;
			}

			else {

				std::cout << "Something else?" << std::endl;
					v.push_back(input);
			}
		}



	}



