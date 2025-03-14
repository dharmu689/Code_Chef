// Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/AORB

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
        int a = x;
        int b = x + y;
        int t1 = (500 - (a * 2)) + (1000 - (b * 4));
        int a1 = y;
        int b1 = y + x;
        int t2 = (1000 - (b1 * 2)) + (500 - (a1 * 4));
        if (t1 >= t2)
        {
            cout << t1 << endl;
        }
        else
        {
            cout << t2 << endl;
        }
    }
    return 0;
}