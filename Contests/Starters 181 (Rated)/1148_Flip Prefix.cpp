// Question - https://www.codechef.com/problems/FLIPPRE?tab=statement

#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int countFlippablePrefixes(const string &s)
{
    int zeros = 0, ones = 0, flippable = 0;
    for (char c : s)
    {
        if (c == '0')
            zeros++;
        else
            ones++;
        if (zeros == ones)
        {
            flippable++;
        }
    }
    return flippable;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        int flippable = countFlippablePrefixes(s);
        long long result = 1;
        for (int i = 0; i < flippable; ++i)
        {
            result *= 2;
        }
        cout << result << endl;
    }
    return 0;
}