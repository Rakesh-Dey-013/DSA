#include <iostream>
#include <vector>
using namespace std;

// Remove Linked List Element - LeetCode 203 --->


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummy(0);
        dummy.next = head;

        ListNode* curr = &dummy;

        while (curr->next != nullptr) {
            if (curr->next->val == val) {
                ListNode* del = curr->next;
                curr->next = curr->next->next;
                delete del;
            } else {
                curr = curr->next;
            }
        }

        return dummy.next;
    }
};

// Helper function to create a linked list from a vector
ListNode* createList(const vector<int>& nums) {
    ListNode* head = nullptr;
    ListNode* tail = nullptr;

    for (int num : nums) {
        if (!head) {
            head = tail = new ListNode(num);
        } else {
            tail->next = new ListNode(num);
            tail = tail->next;
        }
    }
    return head;
}

// Helper function to print the linked list
void printList(ListNode* head) {
    if (!head) {
        cout << "[]" << endl;
        return;
    }

    cout << "[";
    while (head) {
        cout << head->val;
        if (head->next) cout << ", ";
        head = head->next;
    }
    cout << "]" << endl;
}

// Helper function to free memory
void deleteList(ListNode* head) {
    while (head) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    Solution sol;

    // Example 1
    vector<int> v1 = {1, 2, 6, 3, 4, 5, 6};
    ListNode* head1 = createList(v1);
    head1 = sol.removeElements(head1, 6);
    printList(head1);
    deleteList(head1);

    // Example 2
    vector<int> v2 = {};
    ListNode* head2 = createList(v2);
    head2 = sol.removeElements(head2, 1);
    printList(head2);
    deleteList(head2);

    // Example 3
    vector<int> v3 = {7, 7, 7, 7};
    ListNode* head3 = createList(v3);
    head3 = sol.removeElements(head3, 7);
    printList(head3);
    deleteList(head3);

    return 0;
}
