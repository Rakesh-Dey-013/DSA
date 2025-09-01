#include <iostream>
#include <vector>
using namespace std;

// Linear Search in 2D Array --->

bool isPresent(vector<vector<int>> vec, int target)
{
    int row = vec.size();
    int col = vec[0].size();

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (target == vec[i][j])
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{

    vector<vector<int>> vec = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int target = 7;
    if (isPresent(vec, target))
    {
        cout << "Yes, Target is Found." << endl;
    }
    else
    {
        cout << "No, Target is not Found." << endl;
    }

    return 0;
}