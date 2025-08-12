
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



// 2 pointer
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        if (x == 0) return true;

        vector<int> arr;
        int num = x;
        while (num > 0) {
            arr.push_back(num % 10);
            num /= 10;
        }

        int st = 0;
        int end = arr.size() - 1;

        while (st < end) {
            if (arr[st] != arr[end]) return false;
            st++;
            end--;
        }
        return true;
    }

};