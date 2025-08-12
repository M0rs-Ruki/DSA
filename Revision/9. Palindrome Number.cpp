
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x == 0) return false;
        long revNum = 0;
        int orig = x;
        while (x != 0) {
            int digit = x % 10;
            revNum = revNum * 10 + digit;
            x /= 10;
        };
        if (revNum == orig) {
            return true;
        } else {
            return false;
        };
        
    }
};