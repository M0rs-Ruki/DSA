

// 125. Valid Palindrome

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// class Solution {
// public:
//     bool isPalindrome(string s) {

//         // Step 1: Clean the string
//         string orig = "";
//         // Filter only alphanumeric and lowercase everything
//         for (char c : s) {
//             if (isalnum(c)) {
//                 orig += tolower(c);
//             }
//         }

//         // Step 2: Check if the cleaned string is a palindrome
//         reverse(orig.begin(), orig.end());
//         string reverseString = orig;
//         reverse(orig.begin(), orig.end());
//         if(orig == reverseString) {
//             return true;
//         }
//         return false;
//     }
// };
