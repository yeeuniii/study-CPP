#include <algorithm>
#include <iostream>
#include <list>

int	main(void)
{
	std::list<int>	lst;

	lst.push_back(1);
	lst.push_back(10);
	lst.push_back(20);
	lst.push_back(30);
	lst.push_back(1);

	std::list<int>::iterator itr;

	itr = find(lst.begin(), lst.end(), 1);
	std::cout << *itr << std::endl;
	for (itr = lst.begin(); itr != lst.end(); itr++)
		std::cout << *itr << std::endl;
}
