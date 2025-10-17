#pragma once
#include <string>

class ClapTrap {
  public:
	ClapTrap();
	ClapTrap(std::string n);
	ClapTrap(const ClapTrap &other);
	ClapTrap &operator=(const ClapTrap &other);
	virtual ~ClapTrap();

	virtual void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

  protected:
	std::string name;
	int hitPts;
	int energyPts;
	int attDmg;
};
