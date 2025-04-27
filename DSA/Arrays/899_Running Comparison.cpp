// Question - https://www.codechef.com/practice/course/arrays/ARRAYS/problems/RUNCOMPARE

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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        // your code goes here
        int happy_count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= 2 * b[i] && b[i] <= 2 * a[i])
            {
                happy_count++;
            }
        }
        cout << happy_count << endl;
    }
}