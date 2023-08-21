#include "point.hpp"

Point::Point(int pos_x, int pos_y)
{
	this->x = pos_x;
	this->y = pos_y;
}

Point::Point(const Point &point)
{
	*this = point;
}

const int&	Point::getX() const
{
	return this->x;
}

const int&	Point::getY() const
{
	return this->y;
}