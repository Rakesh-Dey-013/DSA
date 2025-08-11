#include <iostream>
using namespace std;

// Find Unique Number in an Array --->
// input : { 2, 3, 2, 4, 3 }
// output : 4

int main()
{
    int arr[] = {2, 3, 2, 4, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int unique = 0;
    for (int i = 0; i < n; i++)
    {
        unique = unique ^ arr[i];
    }
    cout << "Unique Number is : " << unique << endl;

    return 0;
}