
// 74. Search a 2D Matrix

#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

// [[1,3]] not able to solve this 
// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& mat, int target) {
//         int n = mat.size();
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < n; j++) {
//                 if (mat[i][j] == target) {
//                     return true;
//                 }
//             }
//         }
//         return false;
//     }
// };

// 0(N(m * n))
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat[i].size(); j++) {
                if (mat[i][j] == target) {
                    return true;
                }
            }
        }
        return false;
    }
};

//  O(log(m * n))
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        
    }
};