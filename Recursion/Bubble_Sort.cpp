#include <iostream>
#include <vector>
using namespace std;

// Bubble Sort using Recursion --->

void bubbleSort(vector<int> &nums, int n)
{
    if (n == 0 || n == 1)
    {
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] > nums[i + 1])
        {
            swap(nums[i], nums[i + 1]);
        }
    }
    bubbleSort(nums, n - 1);
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
    vector<int> nums = {15, 16, 6, 8, 5};
    int n = nums.size();
    
    cout << "Original Array : ";
    PrintArray(nums);

    bubbleSort(nums, n);
    cout << "After Apply Bubble Sort : ";
    PrintArray(nums);

    return 0;
}