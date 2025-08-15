

// 268. Missing Number

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n = arr.size();
        int courrentSum = 0;
        for (int val : arr) {
            courrentSum += val;
        };
        int supposeSum = n * (n+1) / 2;

        return supposeSum - courrentSum;
    }
};


// binary search


class Solution {
public:
    int missingNumber(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int start = 0;
        int end = arr.size() -1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] == mid ) start = mid +1;
            else end = mid -1;
        }
        return start;
    }
};