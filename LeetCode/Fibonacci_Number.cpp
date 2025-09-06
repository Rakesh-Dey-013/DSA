#include <iostream>
#include <vector>
using namespace std;

// Fibonacci Number - LeetCode 509 --->
// Solve using Recursion

int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    int ans = fib(n - 1) + fib(n - 2);
    return ans;
}

/*
int fib(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    int a = 0, b = 1;
    for (int i = 2; i <= n; i++)
    {
        int c = a + b;
        a = b;
        b = c;
    }
    return b;
}
*/
int main()
{

    int n;
    cout << "Enter a Number : ";
    cin >> n;
    cout << endl;

    int fibNum = fib(n);
    cout << "Finonacci Number of " << n << " is : " << fibNum << endl;

    return 0;
}