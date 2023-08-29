#include <iostream>

int	main()
{
	int num1 = 5;
	int &numRef = num1;
	int num2 = 7;

	std::cout << "num1 : " << num1 << std::endl; 
	std::cout << "num ref : " << numRef << std::endl; 
	std::cout << "num2 : " << num2 << std::endl; 
	std::cout << std::endl;

	numRef = num2;
	std::cout << "num1 : " << num1 << std::endl; 
	std::cout << "num ref : " << numRef << std::endl; 
	std::cout << "num2 : " << num2 << std::endl; 
	std::cout << std::endl;
	
	num2 = -10;
	std::cout << "num1 : " << num1 << std::endl; 
	std::cout << "num ref : " << numRef << std::endl; 
	std::cout << "num2 : " << num2 << std::endl; 
	std::cout << std::endl;
	return 0;
}
