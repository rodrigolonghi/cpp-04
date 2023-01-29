#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	std::cout << this->type + " with no arguments constructor called\n";
	this->brain = new Brain();
}

Dog::~Dog() {
	delete this->brain;
	std::cout << this->type + " destructor called\n";
}

Dog::Dog(Dog const &src) {
	std::cout << src.type + " copy constructor called\n";
	*this = src;
}

Dog & Dog::operator=(Dog const &rhs) {
	std::cout << rhs.type + " copy assignment operator called.\n";
	this->type = rhs.getType();
	this->brain = new Brain();
	return (*this);
}

void	Dog::makeSound() const {
	std::cout << "Woof\n";
}

Brain	*Dog::getBrain() const {
	return (this->brain);
}

std::string	Dog::getType() const {
	return (this->type);
}
