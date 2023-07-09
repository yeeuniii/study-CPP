#include <iostream>
#include <ctime>

int main(void)
{
	int			user_input;
	time_t		timer;
	struct tm	*t;
	
	timer = time(NULL);
	t = localtime(&timer);
	std::cout << "1 : 이름" << std::endl;
	std::cout << "2 : 나이" << std::endl;
	std::cout << "3 : 성별" << std::endl;
	std::cout << "보고 싶은 사용자 정보의 번호를 입력하세요: ";
	std::cin >> user_input;

	switch (user_input)
	{
		case 1:
			std::cout << "박예은" << std::endl;
			break;
		case 2:
			std::cout << t->tm_year + 1900 - 2000 << std::endl;
			break;
		case 3:
			std::cout << "female" << std::endl; 
			break;
		default:
			std::cout << std::endl;		
	}
	return 0;
}