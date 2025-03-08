// Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLOORS

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
        int ch = (x + 9) / 10;
        int chs = (y + 9) / 10;
        if (ch == chs)
        {
            cout << "0" << endl;
        }
        else if (ch > chs)
        {
            cout << abs(ch - chs) << endl;
        }
        else
        {
            cout << abs(chs - ch) << endl;
        }
    }
}