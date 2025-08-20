#include <iostream>
#include <vector>
using namespace std;

// Book Allocation Problem, Allocate Minimum Pages, Split Array Largest Sum ---> Leetcode 410

// Input: arr[] = [12, 34, 67, 90], k = 2
// Output: 113
// Explanation: Allocation can be done in following ways:
// [12] and [34, 67, 90] Maximum Pages = 191
// [12, 34] and [67, 90] Maximum Pages = 157
// [12, 34, 67] and [90] Maximum Pages = 113.
// Therefore, the minimum of these cases is 113, which is selected as the output.

bool isPossible(vector<int> &arr, int n, int m, int mid)
{
    int pageSum = 0, studentCount = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mid)
        {
            return false;
        }
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > m)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int findPages(vector<int> &arr, int n, int m)
{
    if (m > n)
    {
        return -1;
    }
    int st = 0, end, sum, ans = -1, mid;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    end = sum;
    while (st <= end)
    {
        mid = st + (end - st) / 2;
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {12, 34, 67, 90};
    int k = 2;
    int pages = findPages(arr, arr.size(), k);
    cout << "Minimum Pages Allocated : " << pages << endl;

    return 0;
}