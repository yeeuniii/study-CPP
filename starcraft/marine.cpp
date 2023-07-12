#include "marine.hpp"
#include <iostream>
#include <string>

int	Marine::total;

//Marine::Marine() : hp(50), coord_x(0), coord_y(0), damage(5), is_dead(false), name(0) 
//{
//	total++;
//}

Marine::Marine()
{
	this->hp = 50;
	this->coord_x = 0;
	this->coord_y = 0;
	this->damage = 5;
	this->is_dead = false;
	this->name = 0;
	total++;
}

Marine::Marine(int x, int y)
{
	this->hp = 50;
	this->coord_x = x;
	this->coord_y = y;
	this->damage = 5;
	this->is_dead = false;
	this->name = 0;
	total++;
}

Marine::Marine(int x, int y, const char *marine_name)
{
	this->hp = 50;
	this->coord_x = x;
	this->coord_y = y;
	this->damage = 5;
	this->is_dead = false;
	this->name = new char[strlen(marine_name) + 1];
	strcpy(this->name, marine_name);
	total++;
}

Marine::~Marine()
{
	total--;
	if (this->name)
	{
		std::cout << this->name << " ";
		delete[] this->name;
	}
	std::cout << "소멸자 호출" << std::endl;
}

int	Marine::attack()
{
	return this->damage;
}

void	Marine::be_attacked(int damage_earn)
{
	this->hp -= damage_earn;
	if (this->hp < 0)
		is_dead = true;
}

void	Marine::move(int x, int y)
{
	this->coord_x = x;
	this->coord_y = y;
}

void	Marine::show_status()
{
	std::cout << "*** Marine";
	if (this->name)
		std::cout << " : " << this->name << " ***" << std::endl;
	std::cout << "Location : ( " << this->coord_x << ", " << this->coord_y << " )" << std::endl;
	std::cout << "HP : " << this->hp << std::endl;
}

void	Marine::show_total_marine()
{
	std::cout << "The number of marines : " << total << std::endl;
}
