#ifndef _TEST_H_
#define _TEST_H_

#include <iostream>
#include <vector>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution
{

public:
    ListNode *middleNode(ListNode *head);
    ListNode *createLinkedList(const std::vector<int> &nums);
    void test();
};

#endif
