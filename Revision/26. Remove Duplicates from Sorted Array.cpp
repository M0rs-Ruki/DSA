

// 26. Remove Duplicates from Sorted Array

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& num) {

        int n = num.size();
        int val = 0;
        for (int i = 0; i < n; i++) {
            if(num[val] != num[i]) {
                num[++val] = num[i];
            }
        }
        return val+1;
    }
};


// 2 pointer

// it's not going to work the 2 pointer Approach 

class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int st = 0;
        int end = arr.size() -1;
        int val = 0;
        while (st < end) {
            if (arr[st] == arr[end]) {
                val++;
            } else {
                st++;
                end--;
            }
        }
        return val;
    }
};