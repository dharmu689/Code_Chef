// Question - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/F1RULE
// Solution - https://www.codechef.com/viewsolution/1111175867

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if ((x * 1.07) < y)
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }
    }

    return 0;
}