// Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DICEGAME2

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a1, a2, a3, b1, b2, b3;
        cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
        int alice = min({a1, a2, a3});
        int bob = min({b1, b2, b3});
        int total_alice = a1 + a2 + a3 - alice;
        int total_bob = b1 + b2 + b3 - bob;
        if (total_alice > total_bob)
        {
            cout << "alice" << endl;
        }
        else if (total_bob > total_alice)
        {
            cout << "bob" << endl;
        }
        else
        {
            cout << "tie" << endl;
        }
    }
}