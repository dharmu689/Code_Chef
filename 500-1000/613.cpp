//Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/JENGA?tab=statement
//Solution - https://www.codechef.com/viewsolution/1109958189


#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        if (x % n == 0)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }

}