// Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFBOTTLE
// Solution - https://www.codechef.com/viewsolution/1130748530

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, k;
        cin >> n >> x >> k;
        int max_bottles = min(n, k / x);
        cout << max_bottles << endl;
    }
}