// Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SPEEDTEST

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, x, b, y;
        cin >> a >> x >> b >> y;
        double d = static_cast<double>(a) / x;
        double d1 = static_cast<double>(b) / y;
        if (d > d1)
        {
            cout << "Alice" << endl;
        }
        else if (d == d1)
        {
            cout << "Equal" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }
    }
}