#include <iostream>
#include "ListNode.h"
#include "Array.h"
#include "stdio.h"
using namespace std;

int main(int argc, char **argv)
{

    std::vector<int> nums = {-1, -2, -3, -4, -5};

    Solution_array *su = new Solution_array;
    std::vector<int> out = su->twoSum(nums, -8);

    return 0;
}
