//Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BULLET
//Solution - https://www.codechef.com/viewsolution/1129062617

#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int w = (y / x);
        if (z > w)
        {
            cout << z - w << endl;
        }
        else
        {
            cout << "0" << endl;
        }

    }

}