#ifndef _ARRAY_H_
#define _ARRAY_H_

#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

class Solution_array
{
private:
public:
    int removeDuplicates(vector<int> &nums);
    int removeElement(vector<int> &nums, int val);
    vector<int> twoSum(vector<int> &numbers, int target);
};

#endif
