// Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLOW018

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long f = 1;
        for (int i = 1; i <= n; i++)
        {
            f = f * i;
        }
        cout << f << endl;
    }
}