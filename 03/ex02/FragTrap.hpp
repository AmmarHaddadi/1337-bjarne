#pragma once
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
  public:
	FragTrap();
	FragTrap(std::string n);
	FragTrap(const FragTrap &other);
	FragTrap &operator=(const FragTrap &other);
	~FragTrap();

	void highFivesGuys(void);
};
