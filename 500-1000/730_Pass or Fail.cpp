// Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/PASSORFAIL

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, p;
        cin >> n >> x >> p;
        int m = (3 * x) - ((n - x) * 1);
        if (m >= p)
        {
            cout << "pass" << endl;
        }
        else
        {
            cout << "fail" << endl;
        }
    }
}