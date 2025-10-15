#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(const std::string &n) { name = n; }

void Zombie::announce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << '\n';
}

