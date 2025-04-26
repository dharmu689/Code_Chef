// Question - https://www.codechef.com/problems/MDGT?tab=statement

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

        int h[n];
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }

        // bhumi at n-1

        for (int i = 0; i < n; i++)
        {
            if (h[i] >= h[n - 1])
            {
                cout << (n - 1) - (i) << endl;
                break;
            }
            else if ((n - 1) == i)
            {
                cout << "0" << endl;
            }
        }
    }
}
