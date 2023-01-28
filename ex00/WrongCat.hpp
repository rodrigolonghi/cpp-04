#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

class WrongCat : public WrongAnimal {
	public:
		WrongCat();
		~WrongCat();
		WrongCat(WrongCat const &src);
		WrongCat &operator=(WrongCat const &rhs);

		virtual void	makeSound() const;
};

#endif
