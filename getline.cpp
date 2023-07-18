#include <iostream>

/* EOF를 만났을 때 처리 */

int	main(void)
{
	std::string	c;

	while (1)
	{
		if (!getline(std::cin, c))
		{
			std::cout << "in if" << std::endl;
			std::cin.clear();
			clearerr(stdin);
			continue;
		}
		std::cout << c << std::endl;
	}
	return 0;
}
