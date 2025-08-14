#include <iostream>
using namespace std;

int BinaryToOctal(int num)
{
    // Step 1: Convert binary to decimal
    int decimal = 0, base = 1, rem;
    while (num > 0)
    {
        rem = num % 10;
        decimal += rem * base;
        base *= 2;
        num /= 10;
    }

    // Step 2: Convert decimal to octal
    int octal = 0, place = 1;
    while (decimal > 0)
    {
        rem = decimal % 8;
        octal += rem * place;
        place *= 10;
        decimal /= 8;
    }

    return octal;
}

int main()
{
    int binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    cout << "Octal: " << BinaryToOctal(binary) << endl;
    return 0;
}
