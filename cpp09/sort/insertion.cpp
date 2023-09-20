#include <iostream>
#include <vector>

void	swap(int &a, int &b)
{
	int	tmp = a;

	a = b;
	b = tmp;
}

void	sort(std::vector<int> &seq)
{
	int	key = 1;
	int	idx = key - 1;
	int	keyValue = seq[key];
	int	value;

	while (key < seq.size())
	{	
		value = seq[idx];
		if (keyValue < value)
		{
			seq[idx + 1] = value;
			idx--;
		}
		if (idx == -1 || keyValue > value)
		{
			seq[idx + 1] = keyValue;
			// std::cout << "idx : " << idx << std::endl;
			// std::cout << "key : " << keyValue << ", value : " << value << std::endl;
			// for (std::vector<int>::iterator itr = seq.begin(); itr != seq.end(); itr++)
			// 	std::cout << *itr << " ";
			// std::cout << std::endl;
			key++;
			keyValue = key < seq.size() ? seq[key] : -1;
			idx = key - 1;			
		}
	}
}

int	main(int argc, char* argv[])
{
	std::vector<int>	seq;

	if (argc == 1)
		return 1;
	for (int idx = 1; idx < argc; idx++)
		seq.push_back(atoi(argv[idx]));

	std::cout << "before" << std::endl;	
	for (std::vector<int>::iterator itr = seq.begin(); itr != seq.end(); itr++)
		std::cout << *itr << std::endl;
	std::cout << std::endl;
	
	sort(seq);

	std::cout << "after" << std::endl;
	for (std::vector<int>::iterator itr = seq.begin(); itr != seq.end(); itr++)
		std::cout << *itr << std::endl;
	return 0;
}