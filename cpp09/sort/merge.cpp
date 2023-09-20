#include <iostream>
#include <cstdlib>
#include <vector>

std::vector<int>	merge(std::vector<int>& front, std::vector<int>& back)
{
	std::vector<int>	vec;
	int	i = 0;
	int	j = 0;
	int	value;

	while (!(i == front.size() && j == back.size()))
	{
		std::cout << "i : " << i << ", j : " << j << std::endl;
		try
		{
			value = front.at(i) < back.at(j) ? front[i++] : back[j++];
			vec.push_back(value);
		}
		catch (std::out_of_range const& e)
		{
			if (i == front.size())
				vec.push_back(back[j++]);
			if (j == back.size())
				vec.push_back(front[i++]);
		}
	}
	return vec;
}

void	sort(std::vector<int>& front, std::vector<int>& back)
{
	// if (time == 0 || start == seq.size())
	// 	return ;
}

int	main(int argc, char* argv[])
{
	std::vector<int>	seq;

	if (argc == 1)
		return 1;
	for (int idx = 1; idx < argc; idx++)
		seq.push_back(atoi(argv[idx]));
	
	std::vector<int>	front;
	std::vector<int>	back;

	front.push_back(seq[0]);
	front.push_back(seq[1]);
	back.push_back(seq[2]);
	back.push_back(seq[3]);
	std::vector<int>	vec = merge(front, back);
	
	for (std::vector<int>::iterator itr = vec.begin(); itr != vec.end(); itr++)
		std::cout << *itr << std::endl;

	return 0;
}