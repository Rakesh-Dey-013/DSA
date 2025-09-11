#include<iostream>
#include<vector>
using namespace std;

// Insertion Sort using Recursion --->

void insertionSort(vector<int> &nums, int n)
{
    // Base case: array of size 1 is already sorted
    if (n <= 1)
        return;

    // Sort first n-1 elements
    insertionSort(nums, n - 1);

    // Insert last element at its correct position
    int last = nums[n - 1];
    int j = n - 2;

    // Shift elements that are greater than 'last'
    while (j >= 0 && nums[j] > last)
    {
        nums[j + 1] = nums[j];
        j--;
    }

    nums[j + 1] = last;
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

    insertionSort(nums, n);
    cout << "After Apply Bubble Sort : ";
    PrintArray(nums);

    return 0;
}