#pragma once
#ifndef __IMATERIASOURCE_HPP__
#define __IMATERIASOURCE_HPP__

#include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual	~IMateriaSource() {}
		// virtual void	learmMateria(AMateria*) = 0;
		// virtual AMateria*	createMateria(std::string const& type) = 0;
};

#endif