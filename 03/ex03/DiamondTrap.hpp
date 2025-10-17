#pragma once
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
  public:
	DiamondTrap();
	DiamondTrap(std::string n);
	DiamondTrap(const DiamondTrap &other);
	DiamondTrap &operator=(const DiamondTrap &other);
	~DiamondTrap();

	void highFivesGuys(void);
	void attack(const std::string &target);
	void whoAmI();

  private:
	std::string name;
};
