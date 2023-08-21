#include "geometry.hpp"
#include <cstdlib>

void	leaks()
{
	system("leaks a.out");
}

int	main()
{
	atexit(leaks);

	Point	*points[2];

	points[0] = new Point(1, 1);
	points[1] = new Point(4, 5);

	Geometry	geo(points);

	geo.addPoint(Point(2, 2));

	delete points[0];
	delete points[1];
	return 0;
}