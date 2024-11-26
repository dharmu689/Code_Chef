//Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SST?tab=statement
//Solution - https://www.codechef.com/viewsolution/1109295938

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if ((10 * a) > (5 * b))
        {
            cout << "first" << endl;
        }
        else if ((10 * a) < (5 * b))
        {
            cout << "second" << endl;
        }
        else
        {
            cout << "any" << endl;
        }

    }

}