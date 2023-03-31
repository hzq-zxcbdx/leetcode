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
// leetcode 25 k个一组翻转数组

ListNode *Solution::reverseKGroup(ListNode *head, int k)
{
    ListNode *temp = head;
    for (int i = 0; i < k; i++)
    {
        if (head == nullptr)
        {
            return temp;
        };
        head = head->next;
    }
    ListNode *newhead = reverseKGroup(head, k);
    temp = Solution::reverseN(temp, k);
    ListNode *temp1 = temp;
    while (temp1->next != nullptr)
    {
        temp1 = temp1->next;
    }
    temp1->next = newhead;
    return temp;
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