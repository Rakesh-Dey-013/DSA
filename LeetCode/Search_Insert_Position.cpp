#include <iostream>
#include <vector>
using namespace std;

// Search Insert Position - LeetCode 35 --->

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int st = 0, end = nums.size() - 1;
        int mid, ans = nums.size();

        while (st <= end)
        {
            mid = st + (end - st) / 2;

            if (nums[mid] == target)
                return mid;
            else if (nums[mid] > target)
            {
                ans = mid;
                end = mid - 1;
            }
            else
            {
                st = mid + 1;
            }
        }
        return ans;
    }
};

int main()
{
    Solution sol;

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter sorted elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int target;
    cout << "Enter target value: ";
    cin >> target;

    int result = sol.searchInsert(nums, target);
    cout << "Search Insert Position: " << result << endl;

    return 0;
}
