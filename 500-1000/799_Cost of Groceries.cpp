// Question - https://www.codechef.com/practice/course/arrays/ARRAYS/problems/KITCHENCOST

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        // your code goes here
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= x)
            {
                total += b[i];
            }
        }
        cout << total << endl;
    }
}