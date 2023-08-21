#include "geometry.hpp"
#include <iostream>
#include <string>

Geometry::Geometry(Point **point_list)
{
	int	x, y;
	memset(this->point_array, 0, sizeof(Point*) * 100);
	for (int idx = 0; idx < size; idx++)
	{
		x = point_list[idx]->getX();
		y = point_list[idx]->getY();
		this->point_array[idx] = new Point(x, y);
	}
}

Geometry::Geometry()
{
	memset(this->point_array, 0, sizeof(Point*) * 100);
}

Geometry::~Geometry()
{
	for (int idx = 0; idx < this->size; idx++)
		delete this->point_array[idx];
}

void	Geometry::addPoint(const Point &point)
{
	this->point_array[this->size] = new Point(point);
	this->size++;
}