#include "Cat.hpp"

Cat::Cat() : Animal() {
	this->type = "Cat";
	std::cout << this->type + " with no arguments constructor called\n";
}

Cat::~Cat() {
	std::cout << this->type + " destructor called\n";
}

Cat::Cat(Cat const &src) {
	std::cout << src.type + " copy constructor called\n";
	*this = src;
}

Cat & Cat::operator=(Cat const &rhs) {
	std::cout << rhs.type + " copy assignment operator called.\n";
	this->type = rhs.getType();

	return (*this);
}

void	Cat::makeSound() const {
	std::cout << "Meow\n";
}
