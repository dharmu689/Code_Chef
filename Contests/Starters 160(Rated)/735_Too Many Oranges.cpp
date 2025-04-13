// Question - https://www.codechef.com/problems/ORANGES?tab=statement

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
        cin >> n >> k;
        if ((k >= 10 * n) && (k <= 12 * n))
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}