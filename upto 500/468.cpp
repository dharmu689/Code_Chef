//Question - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/ASSIGNMNT
//Solution - https://www.codechef.com/viewsolution/1108537203

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        int m = 24 * 60;
        cin >> x >> y >> z;
        if ((x * y) <= (z * m))
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }

}