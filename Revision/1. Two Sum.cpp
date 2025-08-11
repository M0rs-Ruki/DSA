
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++ ) {
                if (arr[i] + arr[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};