#ifndef STRING_H
# define STRING_H

class String
{
	private:
		char	*str;
		int		len;

	public:
		String(char c, int n);
		String(const char *s);
		String(const String &s);
		~String();

		void	addString(const String &s);
		void	copyString(const String &s);
		int		strlen();
};

#endif
