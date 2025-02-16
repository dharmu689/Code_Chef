// Question https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/XJUMP

// Solution -https://www.codechef.com/viewsolution/1132754354

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;

        cout << (x / y) + (x % y) << endl;
    }
}