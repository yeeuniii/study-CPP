#include "string.hpp"
#include <iostream>

int	main(void)
{
	String	s1('c', 5);
	String	s2("hello ");
	String	s3("world!");
	String	s4(s1);

	std::cout << "s1 : " << s1.str << std::endl;
	
	s2.addString(s3);
	std::cout << "s2 + s3 : " << s2.str << std::endl;
	
	s4.copyString(s3);
	std::cout << "copy s3" << s4.str << std::endl;
	
	return 0;
}

