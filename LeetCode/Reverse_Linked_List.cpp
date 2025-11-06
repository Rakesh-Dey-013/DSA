#include <iostream>
using namespace std;

// Reverse a Linked List - Leetcode 206 --->

class ListNode
{
public:
    int data;
    ListNode *next;

    ListNode(int value)
    {
        data = value;
        next = nullptr;
    }
};

class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *prev = nullptr;
        ListNode *curr = head;
        ListNode *next = nullptr;

        while (curr != nullptr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }
};

// Helper function to print a linked list
void printList(ListNode *head)
{
    ListNode *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data;
        if (temp->next)
            cout << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // Create linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    cout << "Original List: ";
    printList(head);

    Solution solution;
    ListNode *reversedHead = solution.reverseList(head);

    cout << "Reversed List: ";
    printList(reversedHead);

    return 0;
}
