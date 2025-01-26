
//Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DISCUS
//Solution - https://www.codechef.com/viewsolution/1126224931

#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a >= b && a >= c)
        {
            cout << a << endl;
        }
        else if (b >= a && b >= c)
        {
            cout << b << endl;
        }
        else
        {
            cout << c << endl;
        }
    }

}