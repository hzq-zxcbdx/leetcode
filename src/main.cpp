#include <iostream>
#include "ListNode.h"
using namespace std;

int main(int argc, char **argv)
{

    std::vector<int> nums = {1, 2, 3, 4, 5};

    Solution *su = new Solution;
    ListNode *head = su->createLinkedList(nums);
    ListNode *out = su->middleNode(head);
    cout << out->val << endl;

    return 0;
}
