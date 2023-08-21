#include <exception>
#include <iostream>
#include <stdexcept>

void	test()
{
	for (int idx = 1; idx < 10; idx++)
	{
		if (idx % 5 == 0)
			throw std::runtime_error("asdf");
		std::cout << "idx : " << idx << std::endl;
	}
}

int	main(void)
{
	try
	{
		test();
	}
	catch (int idx)
	{
		std::cout << "catch : " << idx << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
