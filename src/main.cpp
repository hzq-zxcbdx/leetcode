#include <iostream>
#include "ListNode.h"
#include "Array.h"
#include "stdio.h"
#include "Hash.h"
using namespace std;

int main(int argc, char **argv)
{

    string s = "anagram";
    string t = "nagaram";
    vector<int> nums1 = {1, 2, 2, 1, 4};
    vector<int> nums2 = {2, 2, 5, 4};

    Solution_hash *su = new Solution_hash;
    vector<int> out = su->intersection(nums1, nums2);
    cout << out.size() << endl;

    return 0;
}
