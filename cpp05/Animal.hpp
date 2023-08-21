#pragma once
#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <string>

#define ANIMAL_COLOR "\e[0;32m"
#define WHITE  "\e[0;37m"

class Animal
{
	protected:
		std::string	type;
	
	public:
		Animal();
		Animal(const Animal& animal);
		virtual ~Animal();
		Animal& operator=(const Animal& animal);

		const std::string&	getType() const;

		virtual void	makeSound() const;
};

#endif