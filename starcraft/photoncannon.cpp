#include "photoncannon.hpp"
#include <iostream>
#include <string>

PhotonCannon::PhotonCannon(int x, int y)
{
	std::cout << "생성자 호출" << std::endl;
	this->hp = 100;
	this->shield = 100;
	this->coord_x = x;
	this->coord_y = y;
	this->damage = 20;
	this->name = 0;
}

PhotonCannon::PhotonCannon(int x, int y, const char *cannon_name)
{
	std::cout << "생성자 호출" << std::endl;
	this->hp = 100;
	this->shield = 100;
	this->coord_x = x;
	this->coord_y = y;
	this->damage = 20;
	this->name = new char[strlen(cannon_name) + 1];
	strcpy(this->name, cannon_name);
}

PhotonCannon::PhotonCannon(const PhotonCannon &pc)
{
	std::cout << "복사 생성자 호출" << std::endl;
	this->hp = pc.hp;
	this->shield = pc.shield;
	this->coord_x = pc.coord_x;
	this->coord_y = pc.coord_y;
	this->damage = pc.damage;
	this->name = strdup(pc.name);
}

PhotonCannon::~PhotonCannon()
{
	if (this->name)
		delete[] this->name;
}

void	PhotonCannon::show_status()
{
	std::cout << "Photon Cannon : " << this->name << std::endl;
	std::cout << " Location : ( " << this->coord_x << " , " << this->coord_y << " )" << std::endl;
	std::cout << " HP : " << this->hp << std::endl;
}
