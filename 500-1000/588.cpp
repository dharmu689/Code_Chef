//Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLOW007?tab=statement
//Solution - https://www.codechef.com/viewsolution/1109278051

#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, y, rev = 0;
        cin >> n;

        //int y=n%10;
        while (n > 0)
        {
            y = n % 10;
            rev = rev * 10 + y;
            n /= 10;

        }
        cout << rev << endl;

    }

}