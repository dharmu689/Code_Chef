// Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFAPPS

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int s, x, y, z;
        cin >> s >> x >> y >> z;
        int a = s - (x + y);
        if (a >= z)
        {
            cout << "0" << endl;
        }
        else if (a + x >= z || a + y >= z)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "2" << endl;
        }
    }
}
