#include "Zombie.hpp"

Zombie *newZombie(const std::string &n) {
	Zombie *z = new Zombie(n);

	return z;
}
