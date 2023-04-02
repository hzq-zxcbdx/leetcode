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
private:
    ListNode *reverseN(ListNode *head, int N)
    {
        ListNode *current = head;
        ListNode *nextNode = head->next;
        ListNode *over = nullptr;
        for (int i = 0; i < N; i++)
        {
            current->next = over;
            over = current;
            current = nextNode;
            if (nextNode->next != nullptr)
            {
                nextNode = nextNode->next;
            }
        }
        return over;
    }

public:
    ListNode *middleNode(ListNode *head);
    bool isPalindrome(ListNode *head);
    ListNode *createLinkedList(const std::vector<int> &nums);
    ListNode *reverseKGroup(ListNode *head, int k);
    ListNode *reverse(ListNode *head);
    void test();
};

#endif
