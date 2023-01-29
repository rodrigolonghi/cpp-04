#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal		*dog = new Dog();
	const Animal		*cat = new Cat();
	const WrongAnimal	*wrongCat = new WrongCat();

	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	std::cout << wrongCat->getType() << std::endl;
	dog->makeSound();
	cat->makeSound();
	wrongCat->makeSound();
	delete dog;
	delete cat;
	delete wrongCat;
	return (0);
}
