#include "ClapTrap.hpp"
#include <iostream>
#include <ostream>

// Default constructor
ClapTrap::ClapTrap() : name("DefaultClap"), hitPts(10), energyPts(10), attDmg(0) {
	std::cout << "ClapTrap " << name << " default constructor called" << std::endl;
}

// Parameterized constructor
ClapTrap::ClapTrap(std::string n) : name(n), hitPts(10), energyPts(10), attDmg(0) {
	if (n.empty())
		std::cout << "Name can't be emtpy" << std::endl;
	std::cout << "ClapTrap " << name << " creted" << std::endl;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap &other) : name(other.name), hitPts(other.hitPts), energyPts(other.energyPts), attDmg(other.attDmg) {
	std::cout << "ClapTrap " << name << " copy constructor called" << std::endl;
}

// Copy assignment operator
ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	std::cout << "ClapTrap " << name << " copy assignment operator called" << std::endl;
	if (this != &other) {
		name = other.name;
		hitPts = other.hitPts;
		energyPts = other.energyPts;
		attDmg = other.attDmg;
	}
	return *this;
}

ClapTrap::~ClapTrap() { std::cout << name << " destroyed" << std::endl; }

void ClapTrap::attack(const std::string &target) {
	if (target.empty()) {
		std::cout << "No target specifed" << std::endl;
		return;
	}
	if (energyPts <= 0) {
		std::cout << name << " has no energy left" << std::endl;
		return;
	}
	std::cout << name << " attacks " << target << " : " << attDmg << " dammage"
			  << std::endl;
	;
	energyPts--;
}

void ClapTrap::takeDamage(unsigned int amount) {
	hitPts -= amount;
	std::cout << name << " takes " << amount << " damage, " << hitPts << " hit points remaining" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (energyPts <= 0) {
		std::cout << name << " has no energy left" << std::endl;
		return;
	}
	hitPts += amount;
	energyPts--;
	std::cout << name << " repaired" << std::endl;
}
