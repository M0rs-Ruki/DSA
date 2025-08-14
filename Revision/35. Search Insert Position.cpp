

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


// Binary Search

class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int start = 0, end = arr.size() - 1;
        
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] == target) {
                return mid;
            } else if (arr[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        
        return start;
    }
};
