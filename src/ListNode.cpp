#include "ListNode.h"

void Solution::test()
{
    cout << "cpp test";
}

// leetcode 876链表的中间结点
ListNode *Solution::middleNode(ListNode *head)
{
    ListNode *fast = head;
    ListNode *slow = head;
    while (fast->next != nullptr)
    {
        fast = fast->next;
        if (fast->next != nullptr)
        {
            fast = fast->next;
            slow = slow->next;
        }
        else
        {
            slow = slow->next;
            break;
        }
    }
    return slow;
}

ListNode *Solution::createLinkedList(const std::vector<int> &nums)
{
    ListNode *dummy = new ListNode(0);
    ListNode *cur = dummy;
    for (int num : nums)
    {
        cur->next = new ListNode(num);
        cur = cur->next;
    }
    return dummy->next;
}