// Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHN15A

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        int count = 0;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            a[i] += k;
            if (a[i] % 7 == 0)
            {
                count++;
            }
        }
        cout << count << endl;
    }
}