#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Dog : public Animal {
	private:
		Brain	*brain;

	public:
		Dog();
		~Dog();
		Dog(Dog const &src);
		Dog &operator=(Dog const &rhs);

		void		makeSound() const;
		Brain		*getBrain() const;
		std::string	getType() const;
};

#endif
