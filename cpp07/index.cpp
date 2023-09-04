#include <iostream>
#include <exception>
#include <vector>

int	main()
{
	std::vector<int> vec;

	try
	{
		vec.push_back(10);
		vec.push_back(20);
		vec.push_back(30);
		std::cout << vec.at(2) << std::endl;
		std::cout << vec.at(3) << std::endl;
	}
	catch (std::exception e)
	{
		std::cout << e.what() << std::endl;
	}
}
