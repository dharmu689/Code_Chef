
//Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MAXTASTE
//Solution - https://www.codechef.com/viewsolution/1126493886

#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        cout << max(a, b) + max(c, d) << endl;

    }

}