#pragma once
#include <string>

class Zombie {
  public:
	Zombie(const std::string &n = "Joe Biden");
	void announce(void);

  private:
	std::string name;
};

Zombie* newZombie( const std::string &n );
void randomChump(const std::string &name);
