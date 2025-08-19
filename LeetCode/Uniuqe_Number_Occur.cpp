#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

// Unique Number of Occurrences - LeetCode 1207
// Input: arr = [1,2,2,1,1,3]
// Output: true
// Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. 
// No two values have the same number of occurrences.

bool uniqueOccurrences(vector<int> &arr)
{
    unordered_map<int, int> freqMap;
    unordered_set<int> uniqueCounts;

    // Count frequency of each number
    for (int num : arr)
    {
        freqMap[num]++;
    }

    // Check uniqueness of frequencies
    for (const auto &pair : freqMap)
    {
        if (uniqueCounts.find(pair.second) != uniqueCounts.end())
        {
            return false;
        }
        uniqueCounts.insert(pair.second);
    }
    return true;
}

int main()
{
    vector<int> nums = {1, 2, 2, 1, 1, 3};

    bool result = uniqueOccurrences(nums);
    cout << (result ? "true" : "false") << endl;

    return 0;
}
