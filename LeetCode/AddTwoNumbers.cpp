#include <iostream>
using namespace std;

// Add Two Numbers - LeetCode 2 --->

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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *ans = new ListNode(); // Dummy head
        ListNode *curr = ans;
        int carry = 0;

        while (l1 || l2 || carry)
        {
            int sum = carry;
            if (l1)
            {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2)
            {
                sum += l2->val;
                l2 = l2->next;
            }
            carry = sum / 10;

            curr->next = new ListNode(sum % 10);
            curr = curr->next;
        }
        return ans->next;
    }
};

int main()
{
    // Example: 342 + 465 = 807
    ListNode *l1 = new ListNode(2, new ListNode(4, new ListNode(3)));
    ListNode *l2 = new ListNode(5, new ListNode(6, new ListNode(4)));

    Solution s;
    ListNode *result = s.addTwoNumbers(l1, l2);

    while (result)
    {
        cout << result->val;
        if (result->next)
            cout << " -> ";
        result = result->next;
    }
}
