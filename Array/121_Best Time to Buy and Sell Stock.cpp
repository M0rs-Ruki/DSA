
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int maxProfit = 0;
        int bestBuy = prices[0];
        int n = prices.size();

        for(int i = 1; i < n; i++) {
            if(prices[i] > bestBuy) {
                maxProfit = max(maxProfit, prices[i] - bestBuy);
            }
            bestBuy = min(bestBuy, prices[i]);
        }
        return maxProfit;
    }
};