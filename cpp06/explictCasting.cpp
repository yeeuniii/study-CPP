#include <iostream>

int	main()
{
	std::cout << "포인터 형변환 문제" << std::endl;
	{
		double *_double = new double(1.234);
		int *_int = _double;
		int *_int2 = (int*)_double;
		int *_int3 = static_cast<int*>(_double);
		int *_int4 = reinterpret_cast<int*>(_double);
	}
	std::cout << std::endl;
	std::cout << "const 문제" << std::endl;
	{
		const char*	_str = "asdf";

		char *str1 = _str;
		char *str2 = (char*)_str;
		char *str3 = static_cast<char*>(_str);
		char *str4 = const_cast<char*>(_str);
	}
	return 0;
}
