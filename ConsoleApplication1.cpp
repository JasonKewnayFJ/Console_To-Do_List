#include <iostream>
#include <ctime>
#include <vector>  
#include <string>

	int main()
	{
		std::vector<std::string> v;
			std::cout << "Enter exit to exit: " << std::endl;
			std::cout << "..." << std::endl;
			std::cout << "Enter what do you need to do?" << std::endl;
			std::cout << "..." << std::endl;

		while (true) 
		{
			std::string input;
			std::getline(std::cin, input);


			if (input == "No")
			{
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

