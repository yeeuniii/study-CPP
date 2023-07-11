#include "point.hpp"
#include "geometry.hpp"
#include <iostream>

Geometry::Geometry(Point **point_list)
{
	std::cout << "Geomtry construct" << std::endl;
	this->point_array = point_list;
}

Geometry::Geometry()
{
	std::cout << "Geometry construct by default" << std::endl;
	this->point_array = 0;
}

void	Geometry::addPoint(const Point &point)
