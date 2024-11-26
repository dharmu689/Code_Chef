//Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MINCARS?tab=statement
//Solution - https://www.codechef.com/viewsolution/1109737641

#include <bits/stdc++.h>

using namespace std;

int main() 
{
        // your code goes here
        int t;
        cin >> t;
        while (t--)
        {
            int n;
            cin >> n;

            if ((n % 4) == 0)
            {
                cout << n / 4 << endl;
            }
            else if (n < 4)
            {
                cout << "1" << endl;
            }
            else
            {
                cout << (n / 4) + 1 << endl;
            }

        }
}