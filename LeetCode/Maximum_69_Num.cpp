#include <iostream>
#include <algorithm>
using namespace std;

// Maximun 69 Number - LeetCode 1323 --->

// Input: num = 9669
// Output: 9969
// Explanation:
// Changing the first digit results in 6669.
// Changing the second digit results in 9969.
// Changing the third digit results in 9699.
// Changing the fourth digit results in 9666.
// The maximum number is 9969.

int Maximum_69_Number(int num)
{
    string str = to_string(num);
    int maxi = num;

    for (int i = 0; i < str.size(); i++)
    {
        char original = str[i]; // store original digit

        // flip digit
        str[i] = (str[i] == '6') ? '9' : '6';

        // calculate new number
        int result = stoi(str);
        maxi = max(result, maxi);

        // revert back
        str[i] = original;
    }
    return maxi;
}

int main()
{
    int num = 9669;
    int max_num = Maximum_69_Number(num);
    cout << "Maximum Number : " << max_num << endl;

    return 0;
}