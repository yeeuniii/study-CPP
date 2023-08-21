#include "string.hpp"
#include <iostream>
#include <string>

String::String(char c, int n)
{
	std::cout << "생성자 호출" << std::endl;
	this->str = new char[sizeof(char) * n];
	memset(this->str, c, n);
	this->len = n;
}

String::String(const char *s)
{
	std::cout << "생성자 호출" << std::endl;
	this->str = strdup(s);
}

String::String(const String &s)
{
	std::cout << "복사 생성자 호출" << std::endl;
	this->str = strdup(s.str);
	this->len = s.len;
}

String::~String()
{
	std::cout << "소멸자 호출" << std::endl;
	if (this->str)
		delete[] this->str;
}

void	String::addString(const String &s)
{
	char	*tmp;

	tmp = this->str;
	this->len += s.len;
	this->str = new char[this->len];
	strcpy(this->str, tmp);
	strcat(this->str, s.str);
	delete[] tmp;
}

void	String::copyString(const String &s)
{
	delete[] this->str;
	this->str = strdup(s.str);
	this->len = s.len;
}

int	String::strlen()
{
	return this->len;
}
