//Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/ACTEMP
//Solution - https://www.codechef.com/viewsolution/1109012669

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a <= b) && (b >= c))
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }

}