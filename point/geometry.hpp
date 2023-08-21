#ifndef GEOMETRY_H
# define GEOMETRY_H

# include "point.hpp"

class	Geometry
{
	Point	*point_array[100];
	int		size;

	public:
		Geometry();
		Geometry(Point **point_list);
		~Geometry();

		void	addPoint(const Point &point);
		// void	printDistance();
		// void	printNumMeets();
};

#endif
