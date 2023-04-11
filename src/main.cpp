#include <iostream>
#include "ListNode.h"
#include "Array.h"
#include "stdio.h"
using namespace std;

int main(int argc, char **argv)
{

    std::vector<int> nums = {-1, -2, -3, -4, -5};
    string s = "bb";

    Solution_array *su = new Solution_array;
    string out = su->longestPalindrome(s);

    return 0;
}
