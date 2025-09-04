#include <iostream>
#include <vector>
using namespace std;

// Row Wise Sum - Largest Row Sum --->

void LargestRowSum(vector<vector<int>> matrix)
{
    vector<int> sums;

    int row = matrix.size();
    int col = matrix[0].size();

    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += matrix[i][j];
        }
        sums.push_back(sum);
    }
    // Largest Row Sum --->
    int maxSum = INT8_MIN;
    cout << "All Row Sum : ";
    for (int i : sums)
    {
        cout << i << " ";
        maxSum = max(i, maxSum);
    }
    cout << endl;
    cout << "Largest Row Sum : " << maxSum << endl;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    LargestRowSum(matrix);

    return 0;
}