

// 69. Sqrt(x)

#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

// brute-force
class Solution {
public:
    int mySqrt(int x) {
        int ans = 0;
        for (long long i = 1; i * i <= x; i++) {
            ans = i;
        };
        return ans;
    }
};



// Binary Search

class Solution {
public:
    int mySqrt(int x) {
        
    }
};

