#include <bits/stdc++.h>
using namespace std;

// Linked List Components - LeetCode 817 --->

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    int numComponents(ListNode* head, vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int components = 0;
        bool inComponent = false;

        while (head) {
            if (s.count(head->val)) {
                if (!inComponent) {
                    components++;
                    inComponent = true;
                }
            } else {
                inComponent = false;
            }
            head = head->next;
        }

        return components;
    }
};

// Helper function to create linked list from vector
ListNode* createList(const vector<int>& values) {
    if (values.empty()) return nullptr;
    ListNode* head = new ListNode(values[0]);
    ListNode* curr = head;
    for (int i = 1; i < values.size(); i++) {
        curr->next = new ListNode(values[i]);
        curr = curr->next;
    }
    return head;
}

int main() {
    // Example 1
    vector<int> list1 = {0, 1, 2, 3};
    vector<int> nums1 = {0, 1, 3};

    ListNode* head1 = createList(list1);

    Solution sol;
    cout << "Output: " << sol.numComponents(head1, nums1) << endl;

    // Example 2
    vector<int> list2 = {0, 1, 2, 3, 4};
    vector<int> nums2 = {0, 3, 1, 4};

    ListNode* head2 = createList(list2);
    cout << "Output: " << sol.numComponents(head2, nums2) << endl;

    return 0;
}
