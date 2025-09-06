#include <iostream>
#include <vector>
using namespace std;

// Linear Search using Recursion
bool linearSearch(vector<int> &nums, int index, int target)
{
    if (index == nums.size())
        return false;
    if (nums[index] == target)
        return true;
    return linearSearch(nums, index + 1, target);
}

// Call with: linearSearch(nums, 0, target);

int main()
{
    vector<int> nums = {1, 3, 5, 7, 9};
    int target = 7;

    if (linearSearch(nums, 0, target))
    {
        cout << "Element found!" << endl;
    }
    else
    {
        cout << "Element not found." << endl;
    }

    return 0;
}
