
//Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SEATNUMBER
//Solution - https://www.codechef.com/viewsolution/1126226211

#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (n >= 1 && n <= 15)
        {
            if (n >= 1 && n <= 10)
            {
                cout << "Lower Double" << endl;
            }
            else
            {
                cout << "Lower Single" << endl;
            }
        }
        else
        {
            if (n >= 16 && n <= 25)
            {
                cout << "Upper Double" << endl;
            }
            else
            {
                cout << "Upper Single" << endl;
            }
        }

    }

}