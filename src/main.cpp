#include <iostream>
#include "ListNode.h"
#include "Array.h"
#include "stdio.h"
using namespace std;

int main(int argc, char **argv)
{

    std::vector<int> nums = {1, 1, 2};

    Solution_array *su = new Solution_array;
    int out = su->removeDuplicates(nums);

    return 0;
}
