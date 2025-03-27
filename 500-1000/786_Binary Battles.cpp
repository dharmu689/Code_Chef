// Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BIN_BAT

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        int total = 0;
        cin >> n >> a >> b;
        while (n > 1)
        {
            total += a;
            n = n / 2;
            if (n > 1)
            {
                total += b;
            }
        }
        cout << total << endl;
    }
}