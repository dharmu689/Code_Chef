//Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFSCORE
//Solution - https://www.codechef.com/viewsolution/1109829806


#include <bits/stdc++.h>

using namespace std;

int main() 
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;

        if ((y % x) == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

}