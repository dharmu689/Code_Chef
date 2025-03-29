// Question - https://www.codechef.com/practice/course/arrays/ARRAYS/problems/UWCOI20A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, maxi = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (maxi < a[i])
            {
                maxi = a[i];
            }
        }
        cout << maxi << endl;
    }
    return 0;
}