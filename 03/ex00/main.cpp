#include "ClapTrap.hpp"
#include <iostream>

int main() {
	std::cout << "=== Testing ClapTrap Basic Functionality ===" << std::endl;
	ClapTrap simo("simo");
	simo.attack("3li");
	simo.takeDamage(5);
	simo.beRepaired(3);

	std::cout << "\n=== Testing Orthodox Canonical Form ===" << std::endl;
	// Test default constructor
	ClapTrap defaultClap;
	
	// Test copy constructor
	ClapTrap copyClap(simo);
	
	// Test assignment operator
	ClapTrap assignClap;
	assignClap = simo;

	std::cout << "\n=== Testing Energy Depletion ===" << std::endl;
	// Test energy depletion
	for (int i = 0; i < 12; i++) {
		simo.beRepaired(1);
	}

	std::cout << "\n=== End of program (destructors will be called) ===" << std::endl;
	return 0;
}
