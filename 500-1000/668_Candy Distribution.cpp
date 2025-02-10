//Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CANDYDIST
//Solution - https://www.codechef.com/viewsolution/1131049369

#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int x = n / m;
        if (n % m == 0 && x % 2 == 0)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }

    }

}