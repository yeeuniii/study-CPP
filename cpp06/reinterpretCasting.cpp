#include <iostream>

int	main()
{
	int	*intPtr = new int(3);
	
//	int _int = reinterpret_cast<int>(intPtr);
//	std::cout << _int << std::endl;

	long _long = reinterpret_cast<long>(intPtr);
	std::cout << _long << std::endl;

	int	*ptr = reinterpret_cast<int*>(_long);
	return 0;
}
