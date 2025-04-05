// Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/WATERCOOLER2

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (x >= y)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << (y - 1) / x << endl;
        }
    }
}