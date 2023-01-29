#include "WrongCat.hpp"

WrongCat::WrongCat() {
	this->type = "WrongCat";
	std::cout << this->type + " with no arguments constructor called\n";
	this->brain = new Brain();
}

WrongCat::~WrongCat() {
	delete this->brain;
	std::cout << this->type + " destructor called\n";
}

WrongCat::WrongCat(WrongCat const &src) {
	std::cout << src.type + " copy constructor called\n";
	*this = src;
}

WrongCat & WrongCat::operator=(WrongCat const &rhs) {
	std::cout << rhs.type + " copy assignment operator called.\n";
	this->type = rhs.getType();
	this->brain = new Brain();
	return (*this);
}

void	WrongCat::makeSound() const {
	std::cout << "Pruu\n";
}

Brain	*WrongCat::getBrain() const {
	return (this->brain);
}

std::string	WrongCat::getType() const {
	return (this->type);
}
