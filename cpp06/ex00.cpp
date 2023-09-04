#include <iostream>
#include <ios>

int	main()
{
	float _float = 2147483647;
	
	std::cout.setf(std::ios::fixed);
	std::cout.precision(1);
	std::cout << _float << std::endl;
}
