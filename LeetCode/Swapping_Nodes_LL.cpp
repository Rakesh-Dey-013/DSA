#include <iostream>
using namespace std;

// Swapping Nodes in a Linked List - LeetCode 1721 --->

/**
 * Definition for singly-linked list.
 */
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
    ListNode *swapNodes(ListNode *head, int k)
    {
        ListNode *first = head;

        for (int i = 1; i < k; i++)
        {
            first = first->next;
        }

        ListNode *second = head;
        ListNode *temp = first;

        while (temp->next != nullptr)
        {
            temp = temp->next;
            second = second->next;
        }

        swap(first->val, second->val);
        return head;
    }
};

// Helper function to print list
void printList(ListNode *head)
{
    while (head)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    // Create list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode *head = new ListNode(1,
                                  new ListNode(2,
                                               new ListNode(3,
                                                            new ListNode(4,
                                                                         new ListNode(5)))));

    int k = 2;

    Solution sol;
    head = sol.swapNodes(head, k);

    cout << "After swapping: ";
    printList(head);

    return 0;
}
