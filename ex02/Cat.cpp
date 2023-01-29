#include "Cat.hpp"

Cat::Cat() {
	this->type = "Cat";
	std::cout << this->type + " with no arguments constructor called\n";
	this->brain = new Brain();
}

Cat::~Cat() {
	delete this->brain;
	std::cout << this->type + " destructor called\n";
}

Cat::Cat(Cat const &src) {
	std::cout << src.type + " copy constructor called\n";
	*this = src;
}

Cat & Cat::operator=(Cat const &rhs) {
	std::cout << rhs.type + " copy assignment operator called.\n";
	this->type = rhs.getType();
	this->brain = new Brain();
	return (*this);
}

void	Cat::makeSound() const {
	std::cout << "Meow\n";
}

Brain	*Cat::getBrain() const {
	return (this->brain);
}

std::string	Cat::getType() const {
	return (this->type);
}
