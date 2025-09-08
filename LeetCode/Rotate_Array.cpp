#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    vector<vector<int>> temp(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp[j][n - i - 1] = matrix[i][j];
        }
    }
    matrix = temp;
}

void print(vector<vector<int>> matrix)
{
    int n = matrix.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    cout << "Print Matrix Element : " << endl;
    print(matrix);

    rotate(matrix);
    cout << "After Rotate - Matrix Element : " << endl;
    print(matrix);

    return 0;
}