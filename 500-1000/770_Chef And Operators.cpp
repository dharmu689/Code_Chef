// Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHOPRT

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
        {
            cout << ">" << endl;
        }
        else if (a < b)
        {
            cout << "<" << endl;
        }
        else
        {
            cout << "=" << endl;
        }
    }
}