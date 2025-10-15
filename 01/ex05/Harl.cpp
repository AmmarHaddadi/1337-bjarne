#include "Harl.hpp"
#include <iostream>

void Harl::debug() { std::cout << "[DEBUG] your text here" << std::endl; }
void Harl::info() { std::cout << "[INFO] your text here" << std::endl; }
void Harl::warning() { std::cout << "[WARNING] your text here" << std::endl; }
void Harl::error() { std::cout << "[ERROR] your text here" << std::endl; }

void Harl::complain(std::string level) {
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning,
								&Harl::error};
	for (int i = 0; i < 4; i++) {
		if (level == levels[i]) {
			(this->*f[i])();
			return;
		}
	}
}
