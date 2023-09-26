#include <iostream>
#include <ctime>
#include <vector>

void	test()
{
	std::vector<int>	vec;

	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);
	vec.push_back(6);
	for (std::vector<int>::iterator itr = vec.begin(); itr != vec.end(); itr++)
		std::cout << *itr << " ";
	std::cout << std::endl;
}

int	main()
{
	const std::clock_t	start = std::clock();

	test();

	const std::clock_t	end = std::clock();
	std::cout << (end - start) * 1000.0 / CLOCKS_PER_SEC << "ms" << std::endl;
	return 0;
}
