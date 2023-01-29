#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Cat : public Animal {
	private:
		Brain	*brain;

	public:
		Cat();
		virtual ~Cat();
		Cat(Cat const &src);
		Cat &operator=(Cat const &rhs);

		virtual void	makeSound() const;
		Brain			*getBrain()	const;
};

#endif
