#include <iostream>
#include <vector>
using namespace std;

// Majority Element - LeetCode 169 --->
// Input: nums = [2,2,1,1,1,2,2]
// Output: 2

int MajorityElement(vector<int> nums)
{
    int element = -1, count = 0, n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            element = nums[i];
            count++;
        }
        else if (element == nums[i])
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    count = 0;
    for (int j = 0; j < n; j++)
    {
        if (element == nums[j])
        {
            count++;
        }
    }
    return (count > n / 2) ? element : -1;
}

int main()
{
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << "Majority Element : " << MajorityElement(nums) << endl;
    
    return 0;
}