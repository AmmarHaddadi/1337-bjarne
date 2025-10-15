#include "main.hpp"

int main() {
	PhoneBook book;
	while(true) {
		std::string inpt;

		std::cout << "> ";
		std::cin >> inpt;

		if (inpt == "a")
			book.add();
		else if (inpt == "s") {
			book.displayAll();

			int option;
			std::cout << "pick index: ";
			std::cin >> option;
			if (option > 7 )
				std::cout << "Inedx out of scope!!";
			else
				book.displayCnt(option);
		}
		else if (inpt == "q")
			return 0;
	}
}
