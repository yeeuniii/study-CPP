#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>

bool	searchBinary(std::vector<int> vec, const int& findValue)
{
	int	start = 0;
	int	end = vec.size() - 1;
	int	mid = start + (end - start) / 2;
	
	while (!(findValue == vec.at(mid) || start == end))
	{
		if (findValue < vec.at(mid))
			end = mid - 1;
		if (findValue > vec.at(mid))
			start = mid + 1;
		mid = start + (end - start) / 2;
	}
	return findValue == vec.at(mid);
}

int	main(int argc, char *argv[])
{
	std::vector<int>	vec;

	if (argc == 1)
		return 1;
	for (int idx = 1; idx < argc; idx++)
		vec.push_back(atoi(argv[idx]));
	std::sort(vec.begin(), vec.end());
	for (std::vector<int>::iterator itr = vec.begin(); itr != vec.end(); itr++)
		std::cout << *itr << std::endl;
	std::cout << std::endl;

	int	findValue = 5;
	
	if (searchBinary(vec, findValue))
		std::cout << "Find " << findValue << "!" << std::endl;
	else
		std::cout << "Cannot find " << findValue << " in vector." << std::endl; 

	return 0;
}