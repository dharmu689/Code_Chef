// Question - https://www.codechef.com/practice/course/arrays/ARRAYS/problems/DISCOUNTT?tab=statement

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        // your code goes here
        int sum = 0;
        int diff = 0;
        int total = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            if (y > a[i])
            {
                diff += 0;
            }
            else
            {
                diff += (a[i] - y);
            }
        }
        total = x + diff;
        if (total < sum)
        {
            cout << "coupon" << endl;
        }
        else
        {
            cout << "no coupon" << endl;
        }
    }
}