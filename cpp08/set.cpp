#include <set>
#include <iostream>

int	main()
{
	std::set<int> set;

	set.insert(1);
	set.insert(-1);
	set.insert(2);
	set.insert(0);

	std::set<int> new_set = set;
	new_set.insert(3);
	set = new_set;
	std::set<int>::iterator itr;
	for (itr = set.begin(); itr != set.end(); itr++)
	{
		std::cout << *itr << std::endl;
		std::cout << *(itr + 1) << std::endl;
	}
	return 0;
}
