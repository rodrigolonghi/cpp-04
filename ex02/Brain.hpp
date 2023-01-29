#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
	private:
		std::string	ideas[100];

	public:
		Brain();
		~Brain();
		Brain(Brain const &src);
		Brain &operator=(Brain const &rhs);

		std::string		getIdea(int index) const;
		void			setIdea(std::string idea, int index);
};

#endif
