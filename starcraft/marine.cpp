#include "marine.hpp"
#include <iostream>

Marine::Marine()
{
	this->hp = 50;
	this->coord_x = 0;
	this->coord_y = 0;
	this->damage = 5;
	this->is_dead = false;
}

Marine::Marine(int x, int y)
{
	this->hp = 50;
	this->coord_x = x;
	this->coord_y = y;
	this->damage = 5;
	this->is_dead = false;
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
	std::cout << "*** Marine ***" << std::endl;
	std::cout << "Location : ( " << this->coord_x << ", " << this->coord_y << " )" << std::endl;
	std::cout << "HP : " << this->hp << std::endl;
}