// Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CRICUP

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, d;
        cin >> x >> y >> d;
        int a = abs(x - y);
        if (a <= d)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}