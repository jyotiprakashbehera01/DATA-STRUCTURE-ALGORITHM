#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int maxProfit = 0;
        int bestBuy = prices[0];

        for (int i = 1; i < prices.size(); i++) {

            if (prices[i] > bestBuy) {
                maxProfit = max(maxProfit, prices[i] - bestBuy);
            }

            bestBuy = min(bestBuy, prices[i]);
        }

        return maxProfit;
    }
};

int main() {

    // Stock prices
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    // Create object of Solution class
    Solution obj;

    // Call maxProfit function
    int result = obj.maxProfit(prices);

    // Print answer
    cout << "Maximum Profit = " << result << endl;

    return 0;
}