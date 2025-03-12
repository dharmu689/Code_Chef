// Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CYCLICQD

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int d1 = a + c;
        int d2 = b + d;
        if (d1 == 180 && d2 == 180)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}