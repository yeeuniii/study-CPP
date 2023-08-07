#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include <iostream>

int	main()
{
	// AMateria	*materias[4];
	AMateria	**materias;

	materias = new AMateria*[4];
	materias[0] = new Ice();
	std::cout << materias[0]->getType() << std::endl;

}
