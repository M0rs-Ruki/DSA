

// 35. Search Insert Position

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;


class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            if (arr[i] >= target) {
                return i;
            };
        };
        return n;
    }
};