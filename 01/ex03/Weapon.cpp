#include "Weapon.hpp"

Weapon::Weapon(const std::string &t) { type = t; }

std::string &Weapon::getType() { return type; }

void Weapon::setType(const std::string &s) { type = s; }
