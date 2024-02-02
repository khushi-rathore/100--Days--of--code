#include <iostream>
#include <vector>
#include <climits>

class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int profit = 0, mini = INT_MAX, max_profit = 0;
        for (int i = 0; i < prices.size(); i++) {
            if (mini > prices[i]) {
                mini = prices[i];
            }
            profit = prices[i] - mini;
            if (profit > max_profit) {
                max_profit = profit;
            }
        }
        return max_profit;
    }
};

int main() {
    // Example usage
    Solution solution;
    std::vector<int> prices = {7, 1, 5, 3, 6, 4};  // Replace with your own input
    int result = solution.maxProfit(prices);
    std::cout << "Maximum Profit: " << result << std::endl;

    return 0;
}
