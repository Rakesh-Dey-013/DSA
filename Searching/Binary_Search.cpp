#include <iostream>
#include <vector>
using namespace std;

// Implement Binary Search --->

int BinarySearch(vector<int> vec, int target)
{
    int n = vec.size();
    int st = 0, end = n - 1, mid;

    while (st <= end)
    {
        mid = st + (end - st) / 2;
        if (target < vec[mid])
        {
            end = mid - 1;
        }
        else if (target > vec[mid])
        {
            st = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    vector<int> vec = {1, 3, 5, 7, 11, 13};
    int target = 11;

    int index = BinarySearch(vec, target);
    cout << "Target " << target << " Found at index : " << index << endl;

    return 0;
}