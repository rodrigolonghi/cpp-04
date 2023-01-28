#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	this->type = "WrongCat";
	std::cout << this->type + " with no arguments constructor called\n";
}

WrongCat::~WrongCat() {
	std::cout << this->type + " destructor called\n";
}

WrongCat::WrongCat(WrongCat const &src) {
	std::cout << src.type + " copy constructor called\n";
	*this = src;
}

WrongCat & WrongCat::operator=(WrongCat const &rhs) {
	std::cout << rhs.type + " copy assignment operator called.\n";
	this->type = rhs.getType();

	return (*this);
}

void	WrongCat::makeSound() const {
	std::cout << "Pruu\n";
}
