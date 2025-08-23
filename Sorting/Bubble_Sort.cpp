#include <iostream>
#include <vector>
using namespace std;

// Implement Bubble Sort Algorithm --->

void BubbleSort(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                swap(nums[j], nums[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

void PrintArray(vector<int> nums){
    for(int i : nums){
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> nums = {15, 16, 6, 8, 5};
    cout << "Original Array : ";
    PrintArray(nums);

    BubbleSort(nums);
    cout << "After Apply Bubble Sort : ";
    PrintArray(nums);

    return 0;
}