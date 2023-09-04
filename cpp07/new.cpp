#include <iostream>
#include <cstdlib>

int	main(void)
{
	int	*arr = 0;
	
	std::cout << "NULL" << std::endl;
	if (arr)
		std::cout << arr << std::endl;
	arr = new int[0];
	std::cout << "new int[0]" << std::endl;
	if (arr)
		std::cout << arr << std::endl;

	//delete[] arr;
	system("leaks a.out");
	return 0;
}
