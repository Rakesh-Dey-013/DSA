#include <iostream>
#include <vector>
using namespace std;

// Implement Insertion Sort Algorithm --->

void InsertionSort(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 1; i < n; i++)
    {
        int temp = nums[i], j = i - 1;
        while (j >= 0 && nums[j] > temp)
        {
            nums[j + 1] = nums[j];
            j--;
        }
        nums[j + 1] = temp;
    }
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
    vector<int> nums = {10, 1, 7, 4, 8, 3, 11};

    cout << "Original Array : ";
    PrintArray(nums);

    cout << "After Apply Insertion Sort : ";
    InsertionSort(nums);
    PrintArray(nums);

    return 0;
}