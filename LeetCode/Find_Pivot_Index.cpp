#include <iostream>
#include <vector>
using namespace std;

// Find Pivot Index - LeetCode 724 --->

// Input: nums = [1,7,3,6,5,6]
// Output: 3
// Explanation:
// The pivot index is 3.
// Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
// Right sum = nums[4] + nums[5] = 5 + 6 = 11

int pivotIndex(vector<int> &nums)
{
    int leftSum = 0, totalSum = 0;
    for (int i : nums)
    {
        totalSum += i;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (leftSum == totalSum - leftSum - nums[i])
        {
            return i;
        }
        else
        {
            leftSum += nums[i];
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    cout << "Pivot Index : " << pivotIndex(nums) << endl;
    cout << "Pivot Element : " << nums[pivotIndex(nums)] << endl;

    return 0;
}