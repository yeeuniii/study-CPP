#ifndef GEOMETRY_H
# define GEOMETRY_H

class	Geometry
{
	Point	*point_array[100];

	public:
	 Geometry(Point **point_list);
	 Geometry();

	 void	addPoint(const Point &point);
	 void	printDistance();
	 void	printNumMeets();
}

#endif
