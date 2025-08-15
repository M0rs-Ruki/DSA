

// 349. Intersection of Two Arrays

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <unordered_set>
using namespace std;


class Solution {
public:
    vector<int> intersection(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        
        for (int val1 : arr1) {
            for (int val2 : arr2) {
                if (val1 == val2) {
                    ans.push_back(val1);
                    break;
                }
            }
        }
        sort(ans.begin(), ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;
    }
};


// Binary search

class Solution {
public:

    bool myBinarySearch (vector<int>& arr, int target) {
        int start = 0 , end = arr.size() -1;
        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (arr[mid] == target) return true;
            else if (arr[mid] < target) start = mid +1;
            else end = mid -1;
        }
        return false;
    }

    vector<int> intersection(vector<int>& arr1, vector<int>& arr2) {

        sort(arr2.begin(), arr2.end());
        unordered_set<int> result;

        for (int val : arr1) {
            if (myBinarySearch(arr2, val)) {
                result.insert(val);
            }
        }
        return vector<int> (result.begin(), result.end());
    }
};

