#include <iostream>

namespace NamespaceA{
    int x;
}

//int x;

int main() {
    int x;

    // the x in main()
    x = 0;
    
	// The x in the global namespace
    ::x = 1;

    // The x in the A namespace
    NamespaceA::x = 2;

	std::cout << x << std::endl;
	std::cout << ::x << std::endl;
}

