// Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BUILDINGRACE

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
        double c = (double)a / x;
        double cs = (double)b / y;
        if (c == cs)
        {
            cout << "both" << endl;
        }
        else if (c < cs)
        {
            cout << "chef" << endl;
        }
        else
        {
            cout << "chefina" << endl;
        }
    }
}