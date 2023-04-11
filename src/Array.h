#ifndef _ARRAY_H_
#define _ARRAY_H_

#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

class Solution_array
{
private:
    string palindrome(string s, int left, int right)
    {
        while (left >= 0 && right < s.length() && (s[left] == s[right]))
        {
            left--;
            right++;
        }
        return s.substr(left + 1, right - left - 1);
    }

public:
    int removeDuplicates(vector<int> &nums);
    int removeElement(vector<int> &nums, int val);
    vector<int> twoSum(vector<int> &numbers, int target);
    string longestPalindrome(string s);
};

#endif
