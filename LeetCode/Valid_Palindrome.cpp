#include <iostream>
using namespace std;

// Valid Palindrome - LeetCode 125 --->

bool isPalindrome(string s)
{
    string cleaned = "";
    for (char ch : s)
    {
        if (isalnum(ch))
        {
            cleaned += tolower(ch);
        }
    }
    int size = cleaned.size();
    int st = 0, end = size - 1;

    while (st <= end)
    {
        if (cleaned[st] != cleaned[end])
        {
            return 0;
        }
        else
        {
            st++, end--;
        }
    }
    return 1;
}

int main()
{
    string ch = "A man, a plan, a canal: Panama";

    if (isPalindrome(ch))
    {
        cout << "String is a Palindrome." << endl;
    }
    else
    {
        cout << "String is not a Palindrome." << endl;
    }

    return 0;
}