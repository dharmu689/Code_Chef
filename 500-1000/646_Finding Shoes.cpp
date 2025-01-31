// Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FINDSHOES
// Solution - https://www.codechef.com/viewsolution/1127798746

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int reqleft, reqright;
        if (n > m)
        {
            reqleft = n - m;
        }
        else
        {
            reqleft = 0;
        }

        reqright = n;

        int total = reqleft + reqright;
        cout << total << endl;
    }
}
