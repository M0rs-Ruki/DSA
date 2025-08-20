

// 287. Find the Duplicate Number

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <unordered_set>
using namespace std;

// You must solve the problem without modifying the array nums 
// and using only constant extra space.

// Memory
// 87.92 MB
// 13.39% Beats

class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        unordered_set<int> set;

        for (int val : arr) {
            if (set.find(val) != set.end()) {
                return val;
            }
            set.insert(val);
        }
        return -1;
    }
};


// link list (slow-fast-pointer)

class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        int slow = arr[0];
        int fast = arr[0];

        do {
            slow = arr[slow]; // +1
            fast = arr[arr[fast]]; // +2
        } while (slow != fast);
        
        slow = arr[0];

        while (slow != fast) {
            slow = arr[slow]; // +1
            fast = arr[fast]; // +1
        }
        return slow;
    }
};