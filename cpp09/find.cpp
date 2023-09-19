#include <iostream>
#include <string>

int	main()
{
	{
		std::string str("date | value");

		std::cout <<(std::string::npos == str.find("i")) << std::endl;
		std::cout << str << std::endl;
	}
	std::cout << "\n";
	{
		std::string	date("2011-01-03 | 3");

		std::cout << date.substr(10);
	}
	return 0;
}
