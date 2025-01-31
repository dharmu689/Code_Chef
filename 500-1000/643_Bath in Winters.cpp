
//Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BATH
//Solution - https://www.codechef.com/viewsolution/1127630256

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
        int req = y * 2;
        if (x >= req)
        {
            cout << x / req << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }

}