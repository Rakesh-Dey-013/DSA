#include <iostream>
#include <vector>
using namespace std;

// Implement Selection Sort Algorithm --->

void SelectionSort(vector<int> &nums)
{
    int n = nums.size();
    int min;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (nums[j] < nums[min])
            {
                min = j;
            }
            swap(nums[i], nums[min]);
        }
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
    vector<int> nums = {7, 4, 10, 8, 3, 1};
    cout << "Original Array : ";
    PrintArray(nums);

    cout << "After Apply Selection Sort : ";
    SelectionSort(nums);
    PrintArray(nums);

    return 0;
}