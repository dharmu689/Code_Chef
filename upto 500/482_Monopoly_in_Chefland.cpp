//Question - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/MONOPOLY?tab=statement
//Solution - https://www.codechef.com/viewsolution/1110232802

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int r1, r2, r3;
        cin >> r1 >> r2 >> r3;

        if (((r1 + r2) < r3) || ((r2 + r3) < r1) || ((r3 + r1) < r2))
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }

}