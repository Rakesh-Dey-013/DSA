#include <iostream>
#include <string>
#include <climits>
using namespace std;

// String to Integer - LeetCode 8 --->

class Solution {
public:
    int myAtoi(string s) {
        int i = 0, n = s.size();

        // Remove leading spaces
        while (i < n && s[i] == ' ')
            i++;

        if (i == n)
            return 0;

        // Detect sign
        int sign = 1;
        if (s[i] == '-') {
            sign = -1;
            i++;
        } else if (s[i] == '+') {
            i++;
        }

        int result = 0;

        // Convert characters to number
        while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0';

            // Check overflow
            if (result > INT_MAX / 10 ||
               (result == INT_MAX / 10 && digit > INT_MAX % 10)) {
                return (sign == 1 ? INT_MAX : INT_MIN);
            }

            result = result * 10 + digit;
            i++;
        }

        return result * sign;
    }
};

int main() {
    Solution sol;

    string input;
    cout << "Enter string: ";
    getline(cin, input);

    int output = sol.myAtoi(input);
    cout << "Converted integer: " << output << endl;

    return 0;
}
