#include <iostream>
#include <vector>
using namespace std;

// Merge Sort using Recursion --->

void merge(vector<int> &nums, int st, int mid, int end)
{
    int n1 = mid - st + 1;
    int n2 = end - mid;

    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = nums[st + i];

    for (int j = 0; j < n2; j++)
        R[j] = nums[mid + 1 + j];

    int i = 0, j = 0, k = st;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
            nums[k++] = L[i++];
        else
            nums[k++] = R[j++];
    }

    while (i < n1)
        nums[k++] = L[i++];
    while (j < n2)
        nums[k++] = R[j++];
}

void mergeSort(vector<int> &nums, int st, int end)
{
    if (st >= end)
        return;

    int mid = st + (end - st) / 2;
    mergeSort(nums, st, mid);
    mergeSort(nums, mid + 1, end);
    merge(nums, st, mid, end);
}

int main()
{
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};
    mergeSort(arr, 0, arr.size() - 1);

    cout << "Sorted array: ";
    for (int x : arr)
        cout << x << " ";
    cout << endl;

    return 0;
}