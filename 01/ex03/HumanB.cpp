#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string &s) { name = s; }

void HumanB::setWeapon(Weapon &wp) {
	// delete weapon;
	weapon = &wp;
}

void HumanB::attack() {
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType()
				  << std::endl;
	else
		std::cout << name << " has no weapon!" << std::endl;
}
