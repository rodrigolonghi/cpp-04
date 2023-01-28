#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
	protected:
		std::string	type;

	public:
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(WrongAnimal const &src);
		WrongAnimal &operator=(WrongAnimal const &rhs);

		std::string	getType() const;
		void		setType(std::string);

		virtual void	makeSound() const;
};

#endif
