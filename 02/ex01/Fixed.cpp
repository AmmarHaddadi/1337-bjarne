#include "Fixed.hpp"
#include <cmath>
#include <iostream>
#include <ostream>

Fixed::Fixed() {
	std::cout << "Default constructor is real" << std::endl;
	val = 0;
}

Fixed::Fixed(const int n) {
	std::cout << "Int constructor is real" << std::endl;
	val = (n << precision);
}

Fixed::Fixed(const float n) {
	std::cout << "Float constructor is real" << std::endl;
	val = int(roundf(n * double(1 << precision)));
}

Fixed::Fixed(const Fixed &other) {
	val = other.val;
	std::cout << "Copy constructor is real" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		val = other.val;
	return *this;
}

Fixed::~Fixed() { std::cout << "Destructor is real" << std::endl; }

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits() is real" << std::endl;
	return val;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits() is real" << std::endl;
	val = raw;
}

float Fixed::toFloat(void) const { return (float)val / (1 << precision); }

int Fixed::toInt(void) const { return val >> precision; }

std::ostream &operator<<(std::ostream &os, const Fixed &f) {
	os << f.toFloat();
	return os;
}
