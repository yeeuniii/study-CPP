#include <iostream>
#include <map>
#include <string>

int	main()
{
	std::map<std::string, float> map;

	map.insert(std::make_pair("anna", 2345));
	std::cout << map["anna"] << std::endl;
}
