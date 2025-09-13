#include <iostream>
#include <vector>
using namespace std;

// Implement Quick Sort using Recursion --->

void quickSort(vector<int> &nums, int left, int right)
{
    if (left >= right)
        return;
    int mid = nums[(left + right) / 2];
    int i = left, j = right;

    while (i <= j)
    {
        while (nums[i] < mid)
            i++;
        while (nums[j] > mid)
            j--;

        if (i <= j)
        {
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
    }

    if (left < j)
        quickSort(nums, left, j);
    if (i < right)
        quickSort(nums, i, right);
}

void print(vector<int> nums)
{
    for (int i : nums)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> nums = {5, 3, 8, 4, 2, 7};

    cout << "Original array : ";
    print(nums);

    quickSort(nums, 0, nums.size() - 1);
    cout << "After apply quick sort algorithm : ";
    print(nums);

    return 0;
}