#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal with no arguments constructor called\n";
}

Animal::~Animal() {
	std::cout << "Animal destructor called\n";
}

Animal::Animal(Animal const &src) {
	std::cout << "Animal copy constructor called\n";
	*this = src;
}

Animal & Animal::operator=(Animal const &rhs) {
	std::cout << "Animal copy assignment operator called.\n";
	this->type = rhs.getType();

	return (*this);
}

std::string	Animal::getType() const {
	return (this->type);
}

void	Animal::makeSound() const {
	std::cout << "...\n";
}
