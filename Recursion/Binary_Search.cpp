#include <iostream>
#include <vector>
using namespace std;

// Binary Search using Recursion --->

bool binarySearch(vector<int> &nums, int st, int end, int target)
{
    if (st > end)
        return false;

    int mid = st + (end - st) / 2;

    if (nums[mid] == target)
        return true;

    if (nums[mid] < target)
        return binarySearch(nums, mid + 1, end, target);

    else
        return binarySearch(nums, st, mid - 1, target);
}

int main()
{
    vector<int> nums = {1, 3, 5, 7, 9};
    int target = 7;

    if (binarySearch(nums, 0, nums.size(), target))
        cout << "Element found!" << endl;

    else
        cout << "Element not found." << endl;

    return 0;
}