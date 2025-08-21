#include <iostream>
#include <vector>
using namespace std;

// Move Zeroes - LeetCode 283 --->

// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]

void moveZeroes(vector<int> &nums)
{
    int size = nums.size();
    int i = 0;
    for (int j = 0; j < size; j++)
    {
        if (nums[j] != 0)
        {
            swap(nums[i], nums[j]);
            i++;
        }
    }
}

void printArray(vector<int> nums)
{
    for (int i : nums)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};
    moveZeroes(nums);
    printArray(nums);

    return 0;
}