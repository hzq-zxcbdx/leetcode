#include <iostream>
#include "ListNode.h"
#include "stdio.h"
using namespace std;

int main(int argc, char **argv)
{

    std::vector<int> nums = {1, 2};

    Solution *su = new Solution;
    ListNode *head = su->createLinkedList(nums);
    ListNode *out = su->reverseKGroup(head, 2);

    while (1)
        ;

    return 0;
}
