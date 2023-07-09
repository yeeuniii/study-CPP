#include <iostream>

int main(void)
{
	int	i;
	int	sum = 0;

	for (i = 0; i < 10; ++i)
		sum += i + 1;
	std::cout << "1부터 10까지의 총합 : " << sum << std::endl;
	return 0;
}
