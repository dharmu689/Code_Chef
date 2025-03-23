// Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEAT

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n < 2)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << 1 + (n - 2) / 7 << endl;
        }
    }
    return 0;
}