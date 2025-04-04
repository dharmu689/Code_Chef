// Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/RECENTCONT

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
        string s;
        int count = 0, count1 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            if (s == "START38")
            {
                count++;
            }
            else if (s == "LTIME108")
            {
                count1++;
            }
        }
        cout << count << " " << count1 << endl;
    }
}