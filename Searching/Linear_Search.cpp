#include <iostream>
#include <vector>
using namespace std;

// Implement Linear Search --->

int LinearSearch(vector<int> vec, int target)
{
    int size = vec.size();
    for (int i = 0; i < size; i++)
    {
        if (vec[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 7;

    int index = LinearSearch(vec, target);
    cout << "Target " << target << " Found at index : " << index << endl;

    return 0;
}