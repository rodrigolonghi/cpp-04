#include "Dog.hpp"

Dog::Dog() : Animal() {
	this->type = "Dog";
	std::cout << this->type + " with no arguments constructor called\n";
}

Dog::~Dog() {
	std::cout << this->type + " destructor called\n";
}

Dog::Dog(Dog const &src) {
	std::cout << src.type + " copy constructor called\n";
	*this = src;
}

Dog & Dog::operator=(Dog const &rhs) {
	std::cout << rhs.type + " copy assignment operator called.\n";
	this->type = rhs.getType();

	return (*this);
}

void	Dog::makeSound() const {
	std::cout << "Woof\n";
}
