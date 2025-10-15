#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string &s, Weapon &wp) : weapon(wp) { name = s; }

void HumanA::attack() {
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
