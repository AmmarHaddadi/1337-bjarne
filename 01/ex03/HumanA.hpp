#pragma once

#include "Weapon.hpp"

class HumanA {
  public:
	HumanA(const std::string &s, Weapon &wp);

	void attack();

  private:
	std::string name;
	Weapon &weapon;
};
