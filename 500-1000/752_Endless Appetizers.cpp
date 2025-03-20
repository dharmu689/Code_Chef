// Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MOZZ

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, r;
        cin >> x >> y >> r;
        int R = r / 30;
        int nx = x + R;
        cout << ceil((double)nx / y) << endl;
    }
}