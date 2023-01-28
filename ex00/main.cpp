#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal		*animal = new Animal();
	const Animal		*dog = new Dog();
	const Animal		*cat = new Cat();
	const WrongAnimal	*wrongAnimal = new WrongAnimal();
	const WrongAnimal	*wrongCat = new WrongCat();

	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	std::cout << wrongCat->getType() << std::endl;
	animal->makeSound();
	dog->makeSound();
	cat->makeSound();
	wrongAnimal->makeSound();
	wrongCat->makeSound();
	return (0);
}