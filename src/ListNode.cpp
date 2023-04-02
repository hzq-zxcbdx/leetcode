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
ListNode *Solution::reverse(ListNode *head)
{
    if (head->next == nullptr)
    {
        return head;
    }
    ListNode *newhead = reverse(head->next);
    head->next->next = head;
    head->next = nullptr;
    return newhead;
}

bool Solution::isPalindrome(ListNode *head)
{
    ListNode *p = head;
    ListNode *newlist = new ListNode();
    ListNode *np = newlist;
    while (p != nullptr)
    {
        newlist->next = new ListNode(p->val);
        newlist = newlist->next;
        p = p->next;
    }
    np = np->next;
    head = Solution::reverse(head);
    while (np->next != nullptr)
    {
        if (np->val == head->val)
        {
            np = np->next;
            head = head->next;
            continue;
        }
        else
        {
            return false;
        }
    }
    return true;
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