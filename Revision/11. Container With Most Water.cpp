
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <unordered_map>
using namespace std;

// class Solution {
// public:
//     int maxArea(vector<int>& arr) {
        
//         int maxWater = 0;
//         int n = arr.size();

//         for (int i = 0; i < n; i++) {
//             for (int j = i+i; j < n; j++) {
//                 int w = j-1;
//                 int h = min(arr[i] , arr[j]);
//                 int currWater = w * h;

//                 maxWater = max(maxWater, currWater);

//             }
            
//         }
//         return maxWater;
//     }
// };


// Two Pointer Approach

class Solution {
public:
    int maxArea(vector<int>& arr) {
        int right = 0;
        int left = arr.size()-1;
        int maxWa = 0;

        while (left < right) {
            int w = right - left;
            int h = min(arr[left], arr[right]);
            maxWa = max(maxWa, w * h);

            if (arr[left] < arr[right]) {
                left++;
            } else {
                right--;
            }
        }
        return maxWa;
    }
};