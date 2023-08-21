#ifndef POINT_H
# define POINT_H

class	Point
{
	int	x;
	int	y;

	public:
		Point(int pos_x, int pos_y);
		Point(const Point &point);

		const int&	getX() const;
		const int&	getY() const;
};

#endif
