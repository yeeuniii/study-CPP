#include <iostream>
#include <deque>
#include <stack>

int	main()
{
	std::stack<int> st;

	st.push(1);
	st.push(2);
	st.push(3);
	
	std::cout << *st.begin() << std::endl;

}
