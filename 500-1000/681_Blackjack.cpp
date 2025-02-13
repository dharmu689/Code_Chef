//Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BLACKJACK
//Solution - https://www.codechef.com/viewsolution/1131875256


#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int C = 21 - (a + b);
        if (C >= 1 && C <= 10)
        {
            cout << C << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }


}