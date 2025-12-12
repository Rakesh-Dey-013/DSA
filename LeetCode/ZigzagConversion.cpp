#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Zigzag Conversion - LeetCode 6 --->

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1)
            return s;

        vector<string> rows(numRows);
        string result = "";

        int row = 0;
        int direction = 1;   // +1 = down, -1 = up

        for (char c : s) {
            rows[row] += c;

            // Change direction at top and bottom
            if (row == numRows - 1)
                direction = -1;
            else if (row == 0)
                direction = 1;

            row = row + direction;
        }

        // Combine all rows
        for (string &r : rows)
            result += r;

        return result;
    }
};

int main() {
    Solution sol;

    string s;
    int numRows;

    cout << "Enter string: ";
    getline(cin, s);

    cout << "Enter number of rows: ";
    cin >> numRows;

    string output = sol.convert(s, numRows);
    cout << "Zigzag result: " << output << endl;

    return 0;
}
