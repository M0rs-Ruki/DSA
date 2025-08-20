

// 2965. Find Missing and Repeated Values

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <unordered_set>
using namespace std;

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& arr) {
        vector<int> ans;
        unordered_set<int> set;
        int n = arr.size();
        int a,b;
        int expSum = 0, actualSum = 0 ;

        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                actualSum += arr[i][j];
                if (set.find(arr[i][j]) != set.end()) {
                    a = arr[i][j];
                    ans.push_back(a);

                }
                set.insert(arr[i][j]);
            }
        }
        expSum = (n*n) * (n*n + 1) / 2;
        b = expSum + a - actualSum;
        ans.push_back(b);
        return ans; 
    }
};