#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class WrongCat : public WrongAnimal {
	private:
		Brain	*brain;

	public:
		WrongCat();
		~WrongCat();
		WrongCat(WrongCat const &src);
		WrongCat &operator=(WrongCat const &rhs);

		void		makeSound() const;
		Brain		*getBrain() const;
		std::string	getType() const;
};

#endif
