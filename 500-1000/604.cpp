//Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/ELECTN
//Solution - https://www.codechef.com/viewsolution/1109448593

#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, c = 0, i = 0;
        cin >> n >> x;
        int a[n];
        /*for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            //for (int i = 0; i < n; i++)
            {
                if (x <= a[i])
                {
                    c++;
                }
            }
        }*/
        while (i < n)
        {
            cin >> a[i];
            {
                if (x <= a[i])
                {
                    c++;
                }
            }
            ++i;

        }


        cout << c << endl;
    }

}