//Question - https://www.codechef.com/problems/DONUTSELL?tab=statement
//Solution - https://www.codechef.com/viewsolution/1109021858

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, i, c = 0;
        cin >> n >> m;

        int a[n], b[m];
        for (i = 0; i < n; i++)

            cin >> a[i];



        for (i = 0; i < m; i++)

            cin >> b[i];


        for (int i = 0; i < m; i++)
        {

            if (a[b[i] - 1] > 0)
            {
                a[b[i] - 1]--;
            }
            else
            {
                c++;
            }
        }
        cout << c << endl;


    }

}