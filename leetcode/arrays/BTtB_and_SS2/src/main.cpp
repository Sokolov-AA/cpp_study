#include <iostream>
#include <vector>

class Solution
{
public:
	int maxProfit(std::vector<int> &prices)
	{
		int size = prices.size();
		int total_profit = 0;
		for (int i = 1; i < size; ++i)
		{
			int diff = prices[i] - prices[i - 1];
			if (diff > 0)
				total_profit += diff;
		}
		return total_profit;
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
	std::vector<int> v = {1, 5, 2, 1, 11, 2};
	sol.print_vector(v);
	std::cout << sol.maxProfit(v) << '\n';
}
