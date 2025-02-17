// Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHESSDIST
// Solution - https://www.codechef.com/viewsolution/1127630256

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int x = x1 - x2;
        int y = y1 - y2;
        if (x < 0)
        {
            x = x * (-1);
        }
        if (y < 0)
        {
            y = y * (-1);
        }
        int reslut = max(x, y);
        cout << reslut << endl;
    }
}