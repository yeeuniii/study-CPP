#include <string>
#include <iostream>
#include <sstream>

int	main()
{
	std::string	str("1   2 +");
	int	idx = 0;
	int	findIdx;
	std::string	*arr = new std::string[str.size() / 2];
	
	std::stringstream ss(str);
	std::string line;
	while (std::getline(ss, line, ' '))
	{
		arr[idx] = line;
		idx++;
	}
	for (idx = 0; idx < 5; idx++)
		std::cout << arr[idx] << std::endl;


	return 0;
}

