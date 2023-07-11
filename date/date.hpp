#ifndef DATE_HPP
# define DATE_HPP

class Date
{
	int	year_;
	int	month_;
	int	day_;

	public:
		Date();
		Date(int year, int month, int date);

		void	setDate(int year, int month, int date);
		void	addDay(int inc);
		void	addMonth(int inc);
		void	addYear(int inc);
		
		int	getCurrentMonthTotalDays(int year, int month);
		void	showDate();
};

#endif
