

// 58. Length of Last Word

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1;
        // Skip trailing spaces
        while (i >= 0 && s[i] == ' ') {
            i--;
        }
        // Count the length of the last word
        int length = 0;
        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }
        return length;
    }
};