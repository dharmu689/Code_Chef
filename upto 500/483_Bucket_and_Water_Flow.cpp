//Question - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/WATERFLOW
//Solution - https://www.codechef.com/viewsolution/1110998263


#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int w, x, y, z;
        cin >> w >> x >> y >> z;
        if ((w + (y * z)) == x)
        {
            cout << "filled" << endl;
        }
        else if ((w + (y * z)) > x)
        {
            cout << "overflow" << endl;
        }
        else
        {
            cout << "unfilled" << endl;
        }
    }

}