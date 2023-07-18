#include "photoncannon.hpp"
#include <iostream>

int	main(void)
{
	// copy consturct
//	PhotonCannon	pc1(3, 3);
//	PhotonCannon	pc2(pc1);
//	PhotonCannon	pc3 = pc2;
//
//	pc1.show_status();
//	pc2.show_status();
//	std::cout << std::endl;

	// limit
	PhotonCannon	pc(3, 3, "Cannon");
	PhotonCannon	pc0 = pc;

	pc.show_status();
	pc0.show_status();
	return 0;
}
