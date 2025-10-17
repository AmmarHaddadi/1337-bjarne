#include "Fixed.hpp"
#include <iostream>
#include <ostream>

Fixed::Fixed() {
	val = 0;
	std::cout << "Default constructor is real" << std::endl;
}

Fixed::Fixed(const Fixed &other) {
	val = other.val;
	std::cout << "Copy constructor is real" << std::endl;
}
Fixed &Fixed::operator=(const Fixed &other) {
	if (this != &other)
		val = other.val;
	std::cout << "Copy assignment operator called" << std::endl;
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
