//Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TRANSFORM
//Solution - https://www.codechef.com/viewsolution/1128546978

#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if ((x % 3) == 0)
        {
            cout << "normal" << endl;
        }
        else if ((x % 3) == 1)
        {
            cout << "huge" << endl;
        }
        else
        {
            cout << "small" << endl;
        }

    }

}