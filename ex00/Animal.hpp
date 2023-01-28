#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal {
	protected:
		std::string	type;

	public:
		Animal();
		~Animal();
		Animal(Animal const &src);
		Animal &operator=(Animal const &rhs);

		std::string	getType() const;
		void		setType(std::string);

		virtual void	makeSound() const;
};

#endif
