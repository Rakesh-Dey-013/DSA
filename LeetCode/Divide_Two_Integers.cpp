#include <bits/stdc++.h>
using namespace std;

// Divide Two Integers - LeetCode 29 --->

class Solution
{
public:
    int divide(int dividend, int divisor)
    {
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        long long ans = (long long)dividend / (long long)divisor;
        return (int)ans;
    }
};

int main()
{
    Solution s;

    int dividend, divisor;
    cin >> dividend >> divisor;

    cout << s.divide(dividend, divisor) << endl;
    return 0;
}
