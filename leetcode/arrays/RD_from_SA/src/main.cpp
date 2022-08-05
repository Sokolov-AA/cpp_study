#include <iostream>
#include <vector>

class Solution
{
public:
	int removeDuplicates(std::vector<int> &nums)
	{
		int size = nums.size();
		int size_up = 1;

		for (int i = 1; i < size; ++i)
		{
			if (nums[i] != nums[i - 1])
			{
				nums[size_up++] = nums[i];
			}
		}

		nums.resize(size_up);
		return size_up;
	}
	void print_vector(std::vector<int> &nums)
	{
		std::cout << "v = { ";
		for (int n : nums)
		{
			std::cout << n << ", ";
		}
		std::cout << "}; \n";
	}
};

int main()
{
	Solution sol{};
	std::vector<int> v = {1, 2, 2, 5, 5, 6, 6, 7, 11, 11, 12};
	sol.print_vector(v);
	sol.removeDuplicates(v);
	sol.print_vector(v);
}
