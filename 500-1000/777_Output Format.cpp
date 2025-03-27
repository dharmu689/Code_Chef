// Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SINGLEUSE

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int h, x, y;
        cin >> h >> x >> y;
        int t = h - y;
        int t1 = (t + x - 1) / x;
        if (h <= y)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << t1 + 1 << endl;
        }
    }
}