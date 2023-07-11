#include "date.hpp"
#include <iostream>

int	main(void)
{
	Date day(2023, 7, 11);
	Date day1;

	day.showDate();
	day1.showDate();

	day.addDay(3);
	day.showDate();
	day.addMonth(3);
	day.showDate();
	day.addYear(3);
	day.showDate();

	std::cout << "2023년 2월 : " << day.getCurrentMonthTotalDays(2023, 2) << std::endl;
	std::cout << "2024년 2월 : " << day.getCurrentMonthTotalDays(2024, 2) << std::endl;
	return (0);
}
