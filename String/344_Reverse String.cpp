
// 344. Reverse String

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0;
        int end = s.size() -1;
        while (start < end) {
            swap(s[start], s[end]);
            start++;
            end--;
        }
    }
};