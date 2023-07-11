#include "date.hpp"

int	main(void)
{
	Date date;

	date.setDate(2023, 7, 11);
	date.showDate();
	date.addDay(3);
	date.showDate();
	date.addMonth(3);
	date.showDate();
	date.addYear(3);
	date.showDate();
	return (0);
}
