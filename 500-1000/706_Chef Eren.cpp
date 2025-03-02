// Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFEREN

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int odd = (n + 1) / 2;
        int even = (n / 2);

        cout << odd * b + even * a << endl;
    }
}