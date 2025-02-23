// Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MYSERVE
// Solution - https://www.codechef.com/viewsolution/1135182408

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int p, q;
        cin >> p >> q;
        int v = (p + q) / 2;
        if (v % 2 == 0)
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }
    }
}