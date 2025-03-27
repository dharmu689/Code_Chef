// Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MINFLIPS

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
        int sum = 0;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (n % 2 != 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << abs(sum / 2) << endl;
        }
    }
    return 0;
}