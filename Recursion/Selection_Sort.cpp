#include <iostream>
#include <vector>
using namespace std;

// Selection Sort using Recursion --->

void selectionSort(vector<int> &nums, int n, int index = 0)
{
    // Base case: if we reached the end
    if (index == n - 1)
        return;

    // Find index of minimum element in the unsorted part
    int minIndex = index;
    for (int j = index + 1; j < n; j++)
    {
        if (nums[j] < nums[minIndex])
        {
            minIndex = j;
        }
    }
    // Swap the found minimum element with the first element
    swap(nums[index], nums[minIndex]);

    // Recurse for the remaining array
    selectionSort(nums, n, index + 1);
}

void PrintArray(vector<int> nums)
{
    for (int i : nums)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> nums = {7, 4, 10, 8, 3, 1};
    int n = nums.size();
    cout << "Original Array : ";
    PrintArray(nums);

    cout << "After Apply Selection Sort : ";
    selectionSort(nums, n);
    PrintArray(nums);

    return 0;
}