#include <iostream>
#include <string>

int	main()
{
	std::string str1 = "2147483647";
	std::string str2 = "214748364999999";
	std::cout << "str1 : " << str1 << std::endl;
	std::cout << "str2 : " << str2 << std::endl;
	std::cout << "str1 < str2 : " << std::boolalpha << (str1 < str2) << std::endl; 
}
