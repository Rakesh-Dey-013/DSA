#include <iostream>
#include <vector>
using namespace std;

// Peak Index in a Mountain Array - LeetCode 852 --->

// Input: arr = [0,2,1,0]
// Output: 1

int peakIndexInMountainArray(vector<int> &arr)
{
    int st = 0, end = arr.size() - 1, mid;
    while (st < end)
    {
        mid = st + (end - st) / 2;
        if (mid < end && arr[mid] < arr[mid + 1])
        {
            st = mid + 1;
        }
        else
        {
            end = mid;
        }
    }
    return st;
}

int main()
{
    vector<int> nums = {0, 2, 1, 0};
    cout << "Peak Index : " << peakIndexInMountainArray(nums) << endl;
    cout << "Peak Element : " << nums[peakIndexInMountainArray(nums)] << endl;

    return 0;
}