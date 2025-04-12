// Question - https://www.codechef.com/practice/course/arrays/ARRAYS/problems/OPMIN?tab=statement

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
        // your code goes here
        int count = 0;
        int M = *min_element(a, a + n);
        for (int i = 0; i < n; i++)
        {
            if (a[i] != M)
            {
                count++;
            }
        }
        cout << count << endl;
    }
}