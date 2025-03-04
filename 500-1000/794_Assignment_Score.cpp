// Question - https://www.codechef.com/problems/ASSIGNSCORE
// Solution - https://www.codechef.com/viewsolution/1110580738

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
        int arr[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        int total = (n + 1) * 100;
        int m = total / 2;
        int score = m - sum;
        if (score <= 100)
        {
            cout << max(score, 0) << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
}
