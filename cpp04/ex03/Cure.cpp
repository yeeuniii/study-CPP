#include "Cure.hpp"

Cure::Cure() : AMateria()
{
	this->type = "cure";
}

Cure::Cure(const Cure& cure) : AMateria(cure)
{
	*this = cure;
}

Cure::~Cure()
{

}

Cure&	Cure::operator=(const Cure& cure)
{
	if (this != &cure)
	{
		this->type = cure.type;
	}
	return *this;
}

AMateria*	Cure::clone() const
{
	return new Cure();
}
