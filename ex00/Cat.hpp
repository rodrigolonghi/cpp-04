#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class Cat : public Animal {
	public:
		Cat();
		virtual ~Cat();
		Cat(Cat const &src);
		Cat &operator=(Cat const &rhs);

		virtual void	makeSound() const;
};

#endif
