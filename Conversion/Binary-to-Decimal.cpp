#include <iostream>
using namespace std;

int binaryToDecimal(int num)
{
    int ans = 0, pow = 1, rem;
    while (num > 0)
    {
        rem = num % 10;
        num /= 10;
        ans = ans + rem * pow;
        pow = pow * 2;
    }
    return ans;
}

int main()
{
    int num;
    cout << "Enter a Binary Number : ";
    cin >> num;
    int ans = binaryToDecimal(num);
    cout << "Decimal Number is : " << ans << endl;

    return 0;
}