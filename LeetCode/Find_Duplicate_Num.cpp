#include <iostream>
#include <vector>
using namespace std;

// Find the Duplicate Number - LeetCode 287 --->

// Input: nums = [1,3,4,2,2]
// Output: 2

int findDuplicate(vector<int> &nums)
{
    int slow = nums[0], fast = nums[0];
    while (true)
    {
        slow = nums[slow];
        fast = nums[nums[fast]];
        if (slow == fast)
        {
            break;
        }
    }
    slow = nums[0];
    while (slow != fast)
    {
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}

int main()
{
    vector<int> nums = {1, 3, 4, 2, 2};
    cout << "Duplicate Number : " << findDuplicate(nums);

    return 0;
}