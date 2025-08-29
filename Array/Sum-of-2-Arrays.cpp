#include <iostream>
#include <vector>
using namespace std;

// Sum of two Arrays - https://www.naukri.com/code360/problems/sum-of-two-arrays_893186

vector<int> reverse(vector<int> &v)
{
    int st = 0, end = v.size() - 1;
    while (st <= end)
    {
        swap(v[st], v[end]);
        st++;
        end--;
    }
    return v;
}

vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{
    int j = m - 1, i = n - 1, carry = 0;
    vector<int> ans;
    while (i >= 0 || j >= 0 || carry)
    {
        int sum = carry;
        if (i >= 0)
            sum += a[i--];
        if (j >= 0)
            sum += b[j--];

        carry = sum / 10;
        ans.push_back(sum % 10);
    }
    return reverse(ans);
}

int main()
{
    vector<int> a = {1, 2, 3, 4};
    vector<int> b = {6};

    vector<int> sum = findArraySum(a, a.size(), b, b.size());

    cout << "Print the sum of array : ";
    for (int i : sum)
    {
        cout << i;
    }
    cout << endl;

    return 0;
}