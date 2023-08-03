#include <iostream>

class	Base
{
	public:
		virtual	void	display();
};

void	Base::display()
{
	std::cout << "Base" << std::endl;
}

class	Derived : public Base
{
	public:
		void	display();
};

void	Derived::display()
{
	std::cout << "Derived" << std::endl;
}

int	main(void)
{
	Derived	derived;
	Base	*base;

	base = &derived;
	base->display();
	return 0;
}
