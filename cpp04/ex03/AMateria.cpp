#include "AMateria.hpp"

AMateria::AMateria() : type("") {}

AMateria::AMateria(std::string const& type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria &aMateria)
{
	*this = aMateria;	
}

AMateria::~AMateria()
{

}

AMateria&	AMateria::operator=(const AMateria& aMateria)
{
	if (this != &aMateria)
	{
		this->type = aMateria.type;
	}
	return *this;
}

std::string const&	AMateria::getType() const
{
	return this->type;
}

// void	use(ICharacter& target)
// {

// }