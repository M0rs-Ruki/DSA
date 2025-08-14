

// 704. Binary Search

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;


class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n = arr.size();
        int start = 0;
        int end = n -1;

        while (start <= end) {
            int middle = start + (end - start) / 2;
            if (target > arr[middle]) {
                start = middle+1;
            } else if (target < arr[middle]) {
                end = middle-1;
            } else {
                return middle;
            }
        }
        return -1;
    }
};