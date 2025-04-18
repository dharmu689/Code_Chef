// Question - https://www.codechef.com/problems/SMLPAL?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t; // Number of test cases
    while (t--)
    {
        int x, y;
        cin >> x >> y; // Read x and y values
        string half = "";

        // Construct the first half
        for (int i = 0; i < x / 2; i++)
        {
            half += '1';
        }
        for (int i = 0; i < y / 2; i++)
        {
            half += '2';
        }

        // Construct the full palindrome
        string palindrome = half;
        if (x % 2 != 0)
        {
            palindrome += '1';
        }
        else if (y % 2 != 0)
        {
            palindrome += '2';
        }

        reverse(half.begin(), half.end());
        palindrome += half;

        cout << palindrome << endl; // Output the palindrome
    }

    return 0; // Correct return statement for main function
}