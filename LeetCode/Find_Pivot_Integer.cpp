#include <iostream>
#include <vector>
using namespace std;

// Find the Pivot Integer - LeetCode 2485 --->

int pivotInteger(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        int leftSum = 0, totalSum = 0;
        for (int i = 0; i <= n; i++)
        {
            totalSum += i;
        }
        cout << totalSum << endl;
        for (int i = 1; i < n; i++)
        {
            if (leftSum == totalSum - leftSum - i)
            {
                return i;
            }
            else
            {
                leftSum += i;
            }
        }
        return -1;
    }
}

int main()
{
    int num;
    cout << "Enter a Number (1-10) : ";
    cin >> num;

    cout << "Pivot Integer : " << pivotInteger(num) << endl;

    return 0;
}