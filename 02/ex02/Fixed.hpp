#pragma once

#include <iostream>

class Fixed {
  public:
	Fixed();
	Fixed(const int n);
	Fixed(const float n);
	Fixed(const Fixed &other);
	~Fixed();

	int operator>(const Fixed &other) const;
	int operator>=(const Fixed &other) const;
	int operator<(const Fixed &other) const;
	int operator<=(const Fixed &other) const;
	int operator==(const Fixed &other) const;
	int operator!=(const Fixed &other) const;

	Fixed &operator=(const Fixed &other);
	Fixed operator+(const Fixed &other) const;
	Fixed operator-(const Fixed &other) const;
	Fixed operator*(const Fixed &other) const;
	Fixed operator/(const Fixed &other) const;

	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

	static Fixed &min(Fixed &a, Fixed &b);
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);

  private:
	int val;
	static const int precision = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &f);
