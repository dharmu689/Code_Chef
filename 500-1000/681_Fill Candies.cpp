
// Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FILLCANDIES
// Solution - https://www.codechef.com/viewsolution/1132595619

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, m;
        cin >> n >> k >> m;

        int p = k * m;
        int c = n + p - 1;
        cout << c / p << endl;
    }
}