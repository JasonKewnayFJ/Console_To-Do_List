#include <iostream>
#include <ctime>
#include <vector>  
#include <string>
#include <algorithm>
#include <nlohmann/json.hpp>
#include <fstream> 

using json = nlohmann::json;

	std::string toLower(std::string s) {
		std::transform(s.begin(), s.end(), s.begin(), ::tolower);
		return s;
	}
	int main()
	{
		setlocale(LC_ALL, "Russian");
		std::vector<std::string> v;
		json j = v;

			std::cout << "Enter what do you need to do?" << std::endl;
			std::cout << "..." << std::endl;
			std::cout << "Enter no or exit to exit: " << std::endl;
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
				for (const std::string& str : v) {
					std::cout << str << std::endl;
				}

				json j = v; // обновляем JSON перед сохранением

				std::ofstream file("data.json");
				if (!file.is_open()) {
					std::cout << "Ошибка открытия файла\n";
					return 1;
				}

				file << j.dump(4); // записываем с отступами
				std::cout << "Данные сохранены\n";
				return 0;
			}


			else {

				std::cout << "Something else?" << std::endl;
					v.push_back(input);

			}
		}



	}



