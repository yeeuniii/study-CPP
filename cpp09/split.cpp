#include <string>
#include <iostream>

int	main()
{
	std::string	str("1 2 +");
	int	idx = 0;
	int	findIdx;

	std::string newString = str;
	findIdx = newString.find(' ');
	while (findIdx != std::string::npos)
	{
		std::cout << newString.substr(0, findIdx) << std::endl;
		newString = newString.substr(findIdx + 1);
		findIdx = newString.find(' ');
	}
	std::cout << newString.substr(0, findIdx) << std::endl;
	return 0;
}

