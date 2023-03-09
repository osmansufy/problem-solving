#include <iostream>

class ListNode
{
public:
    int value;
    ListNode *next;
};

ListNode *sortWithRecursion(ListNode *&head)
{

    ListNode *current = head;
    ListNode *Next = head->next;
    // Base Call
    if (head->next == NULL)
    {
        return head;
    }

    // recursive call
    ListNode *newHead = sortWithRecursion(head->next);
    head->next->next = head;
    head->next = NULL;

    return newHead;
}