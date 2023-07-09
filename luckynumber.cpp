/* 행운의 숫자 맞추기 */
#include <iostream>
#include <cstdlib>

int	 is_valid_number(int num)
{
	return (1 <= num && num <= 100);
}

void    input_number(int *user_input)
{
	std::cin >> *user_input;
	while (!is_valid_number(*user_input))
	{
		std::cout << "입력값이 적절하지 않습니다." << std::endl;
		std::cout << "1부터 100 사이의 정수로 다시 입력해주세요." << std::endl; 
		std::cin >> *user_input;
	}
}

int main(void)
{
    srand(10);
    int lucky_number = rand() % 100 + 1;
	int	trial;
    int user_input;

    std::cout << "행운의 숫자를 맞춰보세요!! 기회는 10번입니다." << std::endl;
    std::cout << "단, 행운의 숫자는 1과 100 사이의 정수입니다." << std::endl;
    for (trial = 0; trial < 10; trial++)
    {
		std::cout << "남은 기회 : " << 10 - trial << std::endl;
		std::cout << "입력 : ";
		std::cin >> user_input;
        if (user_input == lucky_number)
        {
            std::cout << "정답!!" << std::endl;
			break;
		}
        else if (user_input < lucky_number)
            std::cout << "up!!" << std::endl;
        else
            std::cout << "down!!" << std::endl;
	}
	if (trial > 10)
	{
		std::cout << "기회를 모두 사용하였습니다." << std::endl;
		std::cout << "행운의 숫자는 " << lucky_number << "입니다." << std::endl;
	}
	return 0;
}