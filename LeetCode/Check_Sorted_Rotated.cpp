#include <iostream>
#include <vector>
using namespace std;

// Check if Array is Sorted and Rotated - LeetCode 1752 --->

bool check(vector<int> &nums)
{
    int n = nums.size();
    int count = 0;
    for (int i = 1; i < n; i++)
    {
        if (nums[i - 1] > nums[i])
        {
            count++;
        }
    }
    if (nums[n - 1] > nums[0])
    {
        count++;
    }
    return count <= 1;
}

int main()
{
    vector<int> nums = {3,4,5,1,2};
    bool ans = check(nums);
    if(ans){
        cout << "Array is Sorted & Rotated." << endl;
    }
    else{
        cout << "Array is not Sorted & Rotated." << endl;
    }

    return 0;
}