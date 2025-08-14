#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {2, 5, 7, 6, 1, 5, 3, 9, 13};
    int smallest = INT8_MAX;
    int largest = INT8_MIN;

    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] < smallest)
        {
            smallest = vec[i];
        }
        // smallest = min(smallest, vec[i]);
        largest = max(largest, vec[i]);
    }

    cout << "Largest Element in an Array : " << largest << endl;
    cout << "Smallest Element in an Array : " << smallest << endl;

    return 0;
}