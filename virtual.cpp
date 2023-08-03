#include <iostream>

class	Base
{
	public:
		Base();
		virtual	~Base();

		virtual	void	display();
};

Base::Base()
{
	std::cout << "Base 생성자 호출" << std::endl;
}

Base::~Base()
{
	std::cout << "Base 소멸자 호출" << std::endl;
}

void	Base::display()
{
	std::cout << "Base" << std::endl;
}

class	Derived : public Base
{
	public:
		Derived();
		~Derived();

		void	display();
};

Derived::Derived()
{
	std::cout << "derived 생성자 호출" << std::endl;
}

Derived::~Derived()
{
	std::cout << "derived 소멸자 호출" << std::endl;
}

void	Derived::display()
{
	std::cout << "Derived" << std::endl;
}

int	main(void)
{
	Base	*base = new Derived;
	
	base->display();
	delete	base;
	return 0;
}
