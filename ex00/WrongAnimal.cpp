#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "Wrong Animal with no arguments constructor called\n";
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Wrong Animal destructor called\n";
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) {
	std::cout << "Wrong Animal copy constructor called\n";
	*this = src;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const &rhs) {
	std::cout << "Wrong Animal copy assignment operator called.\n";
	this->type = rhs.getType();

	return (*this);
}

std::string	WrongAnimal::getType() const {
	return (this->type);
}

void	WrongAnimal::setType(std::string type) {
	this->type = type;
}

void	WrongAnimal::makeSound() const {
	std::cout << "...\n";
}
