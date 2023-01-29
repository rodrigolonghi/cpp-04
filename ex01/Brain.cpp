#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain with no arguments constructor called\n";
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = (i % 2 == 0) ? "Sleep" : "Play";
	}
}

Brain::~Brain() {
	std::cout << "Brain destructor called\n";
}

Brain::Brain(Brain const &src) {
	std::cout << "Brain copy constructor called\n";
	*this = src;
}

Brain & Brain::operator=(Brain const &rhs) {
	std::cout << "Brain copy assignment operator called.\n";
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = rhs.ideas[i];
	}
	return (*this);
}

std::string		Brain::getIdea(int index) const {
	return this->ideas[index];
}

void		Brain::setIdea(std::string idea, int index) {
	this->ideas[index] = idea;
}
