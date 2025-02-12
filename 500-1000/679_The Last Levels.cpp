//Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/LASTLEVELS
//Solutio - https://www.codechef.com/viewsolution/1131524542

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
        int a = x - 1;
        if (x <= 3)
        {
            cout << x * y << endl;
        }
        else
        {
            cout << (x * y) + (a / 3) * z << endl;
        }
    }

}