// Question - https://www.codechef.com/practice/course/arrays/ARRAYS/problems/LARGESECOND

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int max = INT_MIN;
        int sec_max = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > max)
            {
                sec_max = max;
                max = a[i];
            }
            else if (a[i] > sec_max && a[i] < max)
            {
                sec_max = a[i];
            }
        }
        cout << max + sec_max << endl;
    }
}