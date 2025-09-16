#include <iostream>
#include <vector>
using namespace std;

// LeetCode 78 : Subsets --->

void solve(vector<int> nums, vector<int> output, int index,
           vector<vector<int>> &ans)
{
    // Base Case --->
    if (index >= nums.size())
    {
        ans.push_back(output);
        return;
    }
    // Exclude --->
    solve(nums, output, index + 1, ans);

    // Include --->
    int element = nums[index];
    output.push_back(element);
    solve(nums, output, index + 1, ans);
}

vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solve(nums, output, index, ans);
    return ans;
}
void print(const vector<vector<int>> &ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans = subsets(nums);

    print(ans);

    return 0;
}