// Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SPCP2

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x, n;
        cin >> x >> n;
        int y = x * 100;
        if (y > n)
        {
            cout << "0" << endl;
        }
        else
        {
            if (n % 100 == 0)
            {
                cout << (n - y) / 100 << endl;
            }
            else
            {
                cout << (n - y) / 100 + 1 << endl;
            }
        }
    }
}