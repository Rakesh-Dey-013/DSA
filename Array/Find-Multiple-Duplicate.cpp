#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

// Find Multiple Duplicates in an Array --->

vector<int> FindDuplicates(vector<int> &nums) {
    unordered_set<int> seen;
    unordered_set<int> duplicates;

    for (int num : nums) {
        if (seen.find(num) != seen.end()) {
            duplicates.insert(num);
        } else {
            seen.insert(num);
        }
    }
    return vector<int>(duplicates.begin(), duplicates.end());
}

int main() {
    vector<int> nums = {1, 4, 6, 8, 3, 1, 5, 8, 3, 1, 7};
    vector<int> ans = FindDuplicates(nums);

    cout << "Duplicate Numbers : ";
    for (int num : ans) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
