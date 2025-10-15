#pragma once

#include "Weapon.hpp"

class HumanB {
  public:
	HumanB(const std::string &name);

	void attack();
	void setWeapon(Weapon &wp);

  private:
	std::string name;
	Weapon *weapon;
};
