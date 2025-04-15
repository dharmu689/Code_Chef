// Question - https://www.codechef.com/problems/HWFIN?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int X, Y;
    cin >> X >> Y;

    int mul = 10 * Y;
    int total = X + mul;

    if (total >= 100)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}