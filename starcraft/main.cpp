#include "marine.hpp"
#include <iostream>

void	leaks()
{
	system("leaks a.out");
}

int	main(void)
{
	Marine *marines[100];

//	atexit(leaks);
	marines[0] = new Marine(2, 3, "marine1");
	marines[1] = new Marine(3, 5, "marine2");

	marines[0]->show_status();	
	marines[1]->show_status();	
	
	marines[2] = new Marine;
	marines[2]->show_status();

	std::cout << std::endl << "marine1 attack marine2!" << std::endl;
	marines[1]->be_attacked(marines[0]->attack());

	marines[0]->show_status();	
	marines[1]->show_status();	

	std::cout << std::endl;
	Marine::show_total_marine();

	delete	marines[0];
	delete	marines[1];
	delete	marines[2];
	return 0;
}
