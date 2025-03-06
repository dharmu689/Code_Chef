// Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SELFDEF

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] >= 10 && 60 >= a[i])
            {

                count++;
            }
        }

        cout << count << endl;
    }
}