#include <iostream>
#include <vector>
using namespace std;

// Sum of Array using Recursion --->

int sumOfArray(vector<int> &nums, int size)
{
    if (size == 0)
    {
        return 0;
    }
    // Access the last element and recurse for the rest
    return nums[size - 1] + sumOfArray(nums, size - 1);
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    int size = nums.size();
    cout << "Sum of array: " << sumOfArray(nums, size) << endl;
    return 0;
}
