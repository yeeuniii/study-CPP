#include <iostream>
#include <cstdlib>
#include <vector>

void	merge(std::vector<int>& seq, int start, int mid, int end)
{
	std::vector<int>	sorted(seq);

	int	i = start;
	int	j = mid + 1;
	int	k = start;

	while (i <= mid && j <= end)
		sorted[k++] = seq[i] < seq[j] ? seq[i++] : seq[j++];
	
	int	r = i <= mid ? i : j;
	
	while (k <= end)
		sorted[k++] = seq[r++];

	seq = sorted;
}

void	sort(std::vector<int>& seq, int start, int end)
{
	if (start >= end)
		return ;
	
	int	mid = (start + end) / 2;

	sort(seq, start, mid);		/* left */
	sort(seq, mid + 1, end);	/* right */
	merge(seq, start, mid, end);
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
	
	sort(seq, 0, seq.size() - 1);

	std::cout << "after" << std::endl;
	for (std::vector<int>::iterator itr = seq.begin(); itr != seq.end(); itr++)
		std::cout << *itr << std::endl;
	return 0;
}