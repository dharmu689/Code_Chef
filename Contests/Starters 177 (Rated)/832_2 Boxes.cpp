// Question - https://www.codechef.com/problems/BOX2?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int X, Y, K;
        cin >> X >> Y >> K;
        int diff = abs(X - Y);
        int totalStones = X + Y;
        if (diff == K)
        {
            cout << 0 << endl;
        }
        else if (K > totalStones || (K % 2 != diff % 2))
        {
            cout << -1 << endl;
        }
        else
        {
            cout << abs(K - diff) / 2 << endl;
        }
    }
}