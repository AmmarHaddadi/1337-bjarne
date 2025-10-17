#include "Fixed.hpp"
#include <cmath>
#include <iostream>
#include <ostream>

// CONSTRUCTORS
Fixed::Fixed() {
	// std::cout << "Default constructor is real" << std::endl;
	val = 0;
}

Fixed::Fixed(const int n) {
	// std::cout << "Int constructor is real" << std::endl;
	val = (n << precision);
}

Fixed::Fixed(const float n) {
	// std::cout << "Float constructor is real" << std::endl;
	val = int(roundf(n * double(1 << precision)));
}

Fixed::Fixed(const Fixed &other) {
	val = other.val;
	// std::cout << "Copy constructor is real" << std::endl;
}

Fixed::~Fixed() { std::cout << "Destructor is real" << std::endl; }

// OPERATORS
Fixed &Fixed::operator=(const Fixed &other) {
// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		val = other.val;
	return *this;
}

int Fixed::operator>(const Fixed &other) const { return this->val > other.val; }
int Fixed::operator>=(const Fixed &other) const { return this->val >= other.val; }
int Fixed::operator<(const Fixed &other) const { return this->val < other.val; }
int Fixed::operator<=(const Fixed &other) const { return this->val <= other.val; }
int Fixed::operator==(const Fixed &other) const { return this->val == other.val; }
int Fixed::operator!=(const Fixed &other) const { return this->val != other.val; }

Fixed Fixed::operator+(const Fixed &other) const {
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const {
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const {
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const {
	return Fixed(this->toFloat() / other.toFloat());
}

Fixed &Fixed::operator++() {
	this->val++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed tmp = *this;
	this->val++;
	return tmp;
}

Fixed &Fixed::operator--() {
	this->val--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed tmp = *this;
	this->val--;
	return tmp;
}

std::ostream &operator<<(std::ostream &os, const Fixed &f) {
	os << f.toFloat();
	return os;
}

// METHODS
int Fixed::getRawBits(void) const {
	// std::cout << "getRawBits() is real" << std::endl;
	return val;
}

void Fixed::setRawBits(int const raw) {
	// std::cout << "setRawBits() is real" << std::endl;
	val = raw;
}

float Fixed::toFloat(void) const { return (float)val / (1 << precision); }

int Fixed::toInt(void) const { return val >> precision; }

Fixed &Fixed::min(Fixed &a, Fixed &b) { return (a > b) ? b : a; }
const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
	return (a > b) ? b : a;
}
Fixed &Fixed::max(Fixed &a, Fixed &b) { return (a > b) ? a : b; }
const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
	return (a > b) ? a : b;
}
