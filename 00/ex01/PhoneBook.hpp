#ifndef PhoneBook_HPP
#define PhoneBook_HPP

#include "Contact.hpp"
#include <iomanip>
#include <iostream>
#include <string>
#include <sys/_types/_u_int8_t.h>

class PhoneBook {
  public:
	// FIX A saved contact can’t have empty fields
	void add() {
		Contact c;

		std::cout << "Enter first name: ";
		std::cin >> c.fname;
		std::cout << "Enter last name: ";
		std::cin >> c.lname;
		std::cout << "Enter nickname: ";
		std::cin >> c.nick;
		std::cout << "Enter phone number: ";
		std::cin >> c.phone;
		std::cout << "Enter darkest secret: ";
		std::cin >> c.secret;

		contacts[count] = c;
		count < 7 ? count++ : count = 0;
	}

	void search(u_int8_t idx) {
		std::cin >> contacts[idx].fname;
		std::cin >> contacts[idx].lname;
		std::cin >> contacts[idx].nick;
		std::cin >> contacts[idx].phone;
		std::cin >> contacts[idx].secret;
	}

	void displayAll() {
		for (int i = 0; i < 8; i++) {
			if (contacts[i].fname.length() < 1)
				break;

			std::cout << std::setw(10) << i << '|' << std::setw(10)
					  << format(contacts[i].fname) << '|' << std::setw(10)
					  << format(contacts[i].lname) << '|' << std::setw(10)
					  << format(contacts[i].nick) << std::endl;
		}
	}

	void displayCnt(u_int8_t i) {
		if (contacts[i].fname.length() < 1) {
			std::cout << "Empty entry" << std::endl;
			return;
		}

		std::cout << std::left << std::setw(18)<< "First name: " << contacts[i].fname << std::endl
				  << std::left << std::setw(18)<< "Last name: " << contacts[i].lname << std::endl
				  << std::left << std::setw(18)<< "Nickname: " << contacts[i].nick << std::endl
				  << std::left << std::setw(18)<< "Phone number: " << contacts[i].phone << std::endl
				  << std::left << std::setw(18)<< "Darkest secret: " << contacts[i].secret << std::endl;
	}

  private:
	uint8_t count;
	Contact contacts[8];

	std::string format(const std::string &s) {
		if (s.length() > 10)
			return s.substr(0, 9) + ".";
		return s;
	}
};

#endif
