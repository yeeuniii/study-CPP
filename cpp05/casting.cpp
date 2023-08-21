#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void	testConst(char *str)
{
	std::cout << str << std::endl;
}

int	main()
{
	std::cout << "----------Const casting----------" << std::endl;
	{
		const char	*str = "asdf";

		testConst(const_cast<char*>(str));
	}
	std::cout << "----------Static casting----------" << std::endl;
	{
		double d;

		d = static_cast<double>(5) / 2;
		std::cout << "5 / 2 = " << d << std::endl;

		int	num = 5;
		int *ptr = &num;

		int *casting = ptr;

	}
	std::cout << "----------Dynamic casting----------" << std::endl;
	{
		Animal	*animals[2];

		animals[0] = new Dog();
		animals[1] = new Cat();

		// animals[1]->makeSound();

		Dog *cat = (Dog*)animals[1];
		cat->makeSound();
		cat->whoamI();
		
		Dog *dog = dynamic_cast<Dog*>(animals[1]); // dynamic_case -> runtime에 casting
		// dog->makeSound(); //segfault
		dog->whoamI();

	}
	return 0;
}