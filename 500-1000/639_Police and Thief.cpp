
//Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/POLTHIEF
//Solution - https://www.codechef.com/viewsolution/1126828423

#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (x >= y)
        {
            cout << x - y << endl;
        }
        else
        {
            cout << y - x << endl;
        }
    }

}