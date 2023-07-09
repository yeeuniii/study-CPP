#include <iostream>

struct s_animal
{
	char	name[30];
	int		age;
	int		health;
	int		food;
	int		clean;
};

struct s_animal	init_animal(char *name, int age)
{
	struct s_animal	animal;

	animal.name = name;
	animal.age = age;
	animal.health = 300;
	animal.food = 100;
	animal.clean = 200;
	return animal;
}

void	play(struct s_animal *animal) // 동물의 상태 변경
{
	animal->health += 10;
	animal->food -= 20;
	animal->clean -= 30;
}

// void	show_stat() // 동물의 상태 출력
// {
// 
// }

int	main(void)
{
	struct s_animal	*lst = new s_animal[30];

	return 0;
}