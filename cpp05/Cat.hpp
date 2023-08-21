#pragma once
#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"
#include <string>

#define CAT_COLOR "\e[0;35m"

class Cat : public Animal
{
	private:

	public:
		Cat();
		Cat(const Cat& cat);
		virtual ~Cat();
		Cat& operator=(const Cat& cat);
		
		virtual void	makeSound() const;
		void	whoamI() const;
};

#endif