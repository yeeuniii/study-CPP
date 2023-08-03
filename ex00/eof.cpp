#include <iostream>

int	main(void)
{
	std::string	c;

	getline(std::cin, c);
	std::cout << "goodbit : " << std::cin.good() << std::endl;
	std::cout << "eofbit : " << std::cin.eof() << std::endl;
	return 0;
}
