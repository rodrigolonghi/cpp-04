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
		virtual ~Dog();
		Dog(Dog const &src);
		Dog &operator=(Dog const &rhs);

		virtual void	makeSound() const;
		Brain			*getBrain()	const;
};

#endif
