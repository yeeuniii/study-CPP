#include "date.hpp"
#include <iostream>

void	Date::setDate(int year, int month, int date)
{
	this->year_ = year;
	this->month_ = month;
	this->day_ = date;
}

void	Date::addDay(int inc)
{
	this->day_ += inc;
}

void	Date::addMonth(int inc)
{
	this->month_ += inc;
}

void	Date::addYear(int inc)
{
	this->year_ += inc;
}

int	isLeapYear(int year)
{
	return (year % 4 == 0 && year % 100);
}

int	Date::getCurrentMonthTotaldays(int year, int month)
{
	switch (month)
	{
		case 2:
			return (28 + isLeapYear(year));
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			return (31);
		default:
			return (30);
	}
}

void	Date::showDate()
{
	std::cout << this->year_ << "년 ";
	std::cout << this->month_ << "월 ";
	std::cout << this->day_ << "일" << std::endl;
}
