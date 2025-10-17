#pragma once

#include <iostream>

class Fixed {
  public:
	Fixed();
	Fixed(const int n);
	Fixed(const float n);
	Fixed(const Fixed &other);
	Fixed &operator=(const Fixed &other);
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	// std::ostream& operator<<(std::ostream& os) const;

  private:
	int val;
	static const int precision = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &f);
