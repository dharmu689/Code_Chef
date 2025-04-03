// Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DPOLY

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
        int degree = -1;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x != 0)
            {
                degree = i;
            }
        }
        cout << degree << endl;
    }
    return 0;
}