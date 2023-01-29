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
		~Cat();
		Cat(Cat const &src);
		Cat &operator=(Cat const &rhs);

		void		makeSound() const;
		Brain		*getBrain() const;
		std::string	getType() const;
};

#endif
