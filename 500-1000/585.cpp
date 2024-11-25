//Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/NEARESTEXIT
//Solution - https://www.codechef.com/viewsolution/1109014814

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if ((1 <= x) && (50 >= x))
        {
            cout << "left" << endl;
        }
        else
        {
            cout << "right" << endl;
        }
    }

}