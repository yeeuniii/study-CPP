#include <iostream>

class	asdf
{
	private:
		int	a;
	public:
		const int	&test();
};

const int	&asdf::test()
{
	this->a = 5;
	return this->a;
}

int	main()
{
	asdf	a;
	const int &b = a.test();

	std::cout << b << std::endl;
	return 0;
}
