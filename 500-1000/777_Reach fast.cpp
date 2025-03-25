// Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/REACHFAST

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, k;
        cin >> a >> b >> k;
        int ts = abs(a - b);
        cout << (ts + k - 1) / k << endl;
    }
}