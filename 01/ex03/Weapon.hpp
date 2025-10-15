#pragma once

#include <string>
class Weapon {
  public:
	// Weapon();
	Weapon(const std::string &t);
	std::string &getType();
	void setType(const std::string &s);

  private:
	std::string type;
};
