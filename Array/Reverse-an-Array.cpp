#include <iostream>
#include <vector>
using namespace std;

// Reverse of an Array --->
// 2 Pointers Approach --->

void Reverse_Array(int arr[], int size)
{
    int start = 0, end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void Print_Array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter Number of Elements : ";
    cin >> n;
    int *arr = new int[n];

    cout << "Enter " << n << " Elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Print The Actual Array : ";
    Print_Array(arr, n);

    Reverse_Array(arr, n);
    cout << "Print After Apply Reverse : ";
    Print_Array(arr, n);

    return 0;
}