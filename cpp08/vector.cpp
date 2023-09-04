#include <iostream>
#include <vector>

int	main()
{
	std::vector<int>	vec;

	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);

	std::vector<int>::iterator itr = vec.begin();
	for (itr; itr != vec.end(); ++itr)
		std::cout << *itr << std::endl;
	return 0;
}
