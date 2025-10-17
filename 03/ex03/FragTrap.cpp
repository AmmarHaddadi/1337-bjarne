#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>
#include <ostream>

FragTrap::FragTrap() : ClapTrap() {
	name = "DefaultFrag";
	hitPts = 100;
	energyPts = 50;
	attDmg = 20;
	std::cout << "Frag " << name << " default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string n) : ClapTrap(n) {
	if (n.empty())
		std::cout << "Name can't be emtpy" << std::endl;
	hitPts = 100;
	energyPts = 50;
	attDmg = 20;
	std::cout << "Frag " << name << " created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
	std::cout << "FragTrap " << name << " copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
	std::cout << "FragTrap " << name << " copy assignment operator called"
			  << std::endl;
	if (this != &other) {
		ClapTrap::operator=(other); // Call base class assignment operator
	}
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << name << " destroyed" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "uuh h *whispers to self* h- i-igh five pwease?!?1 UwU."
			  << std::endl;
}
