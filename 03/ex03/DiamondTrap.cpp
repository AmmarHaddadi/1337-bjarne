#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <ostream>

DiamondTrap::DiamondTrap()
	: ClapTrap("basic_niha_clap_name"), ScavTrap(), FragTrap() {
	name = "DefaultDiamond";
	hitPts = FragTrap::hitPts;
	energyPts = ScavTrap::energyPts;
	attDmg = FragTrap::attDmg;
	std::cout << "Diamond " << name << " default constructor called"
			  << std::endl;
}

DiamondTrap::DiamondTrap(std::string n) : ClapTrap(n) {
	if (n.empty())
		std::cout << "Name can't be emtpy" << std::endl;
	hitPts = 100;
	energyPts = 50;
	attDmg = 20;
	std::cout << "Diamond " << name << " created" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other) {
	std::cout << "DiamondTrap " << name << " copy constructor called"
			  << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other) {
	std::cout << "DiamondTrap " << name << " copy assignment operator called"
			  << std::endl;
	if (this != &other) {
		ClapTrap::operator=(other); // Call base class assignment operator
	}
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << name << " destroyed" << std::endl;
}

void DiamondTrap::highFivesGuys(void) {
	std::cout << "uuh h *whispers to self* h- i-igh five pwease?!?1 UwU."
			  << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "Diamon name: " << name << "\nClappy name: " << ClapTrap::name
			  << std::endl;
}
