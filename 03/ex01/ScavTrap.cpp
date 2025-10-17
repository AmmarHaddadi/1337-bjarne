#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>
#include <ostream>

ScavTrap::ScavTrap() : ClapTrap() {
	name = "DefaultScav";
	hitPts = 100;
	energyPts = 50;
	attDmg = 20;
	std::cout << "Scav " << name << " default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string n) : ClapTrap(n) {
	if (n.empty())
		std::cout << "Name can't be emtpy" << std::endl;
	hitPts = 100;
	energyPts = 50;
	attDmg = 20;
	std::cout << "Scav " << name << " created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
	std::cout << "ScavTrap " << name << " copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
	std::cout << "ScavTrap " << name << " copy assignment operator called"
			  << std::endl;
	if (this != &other) {
		ClapTrap::operator=(other); // Call base class assignment operator
	}
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << name << " destroyed" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
	std::cout << "Scav " << name << " scavved " << target << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << name << " Gatekeeper mode active" << std::endl;
}
