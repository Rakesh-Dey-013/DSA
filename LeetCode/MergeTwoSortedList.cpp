#include <iostream>
#include <vector>
using namespace std;

// Merge Two Sorted LinkedList - LeetCode 21 --->

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
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode ans;
        ListNode *temp = &ans; // pointer to build result

        while (list1 && list2)
        {
            if (list1->val <= list2->val)
            {
                temp->next = list1;
                list1 = list1->next; // advance list1
            }
            else
            {
                temp->next = list2;
                list2 = list2->next; // advance list2
            }
            temp = temp->next;
        }

        // Attach remaining nodes
        temp->next = list1 ? list1 : list2;

        return ans.next;
    }
};

// Helper: convert vector -> linked list
ListNode *createList(const vector<int> &vals)
{
    if (vals.empty())
        return nullptr;
    ListNode *head = new ListNode(vals[0]);
    ListNode *curr = head;

    for (int i = 1; i < vals.size(); i++)
    {
        curr->next = new ListNode(vals[i]);
        curr = curr->next;
    }
    return head;
}

// Helper: print linked list
void printList(ListNode *head)
{
    while (head)
    {
        cout << head->val;
        if (head->next)
            cout << " -> ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    vector<int> v1 = {1, 2, 4};
    vector<int> v2 = {1, 3, 4};

    ListNode *list1 = createList(v1);
    ListNode *list2 = createList(v2);

    Solution sol;
    ListNode *merged = sol.mergeTwoLists(list1, list2);

    cout << "Merged List: ";
    printList(merged);

    return 0;
}
