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
		virtual ~WrongCat();
		WrongCat(WrongCat const &src);
		WrongCat &operator=(WrongCat const &rhs);

		virtual void	makeSound() const;
		Brain			*getBrain()	const;
};

#endif
