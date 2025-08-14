#include <iostream>
using namespace std;

int DecimalToBinary(int num)
{
    int rem, ans = 0, pow = 1;
    while (num > 0)
    {
        rem = num % 2;
        num /= 2;
        ans = ans + rem * pow;
        pow = pow * 10;
    }
    return ans;
}

int main()
{
    int num;
    cout << "Enter a Number : ";
    cin >> num;
    int ans = DecimalToBinary(num);
    cout << "Binary Number : " << ans << endl;

    return 0;
}