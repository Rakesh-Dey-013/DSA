#include <iostream>
#include <vector>
using namespace std;

// Binary Search in 2D Array --->

bool SearchMatrix(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();

    int st = 0, end = row * col - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        int rowIndex = mid / col;
        int colIndex = mid % col;

        if (matrix[rowIndex][colIndex] == target)
        {
            return true;
        }
        else if (matrix[rowIndex][colIndex] < target)
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return false;
}

int main()
{

    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int target;
    cout << "Enter the Target value : ";
    cin >> target;

    if (SearchMatrix(matrix, target))
    {
        cout << "Target found successfullly." << endl;
    }
    else
    {
        cout << "Target not found." << endl;
    }

    return 0;
}