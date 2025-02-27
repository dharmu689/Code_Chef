// Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/WTRMIXING
// Solution - https://www.codechef.com/viewsolution/1136091597

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, x, y;
        cin >> a >> b >> x >> y;

        if (a == b)
        {
            cout << "yes" << endl;
        }

        else if (a < b && (b - a) <= x)
        {

            cout << "yes" << endl;
        }

        else if (a > b && (a - b) <= y)
        {

            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}