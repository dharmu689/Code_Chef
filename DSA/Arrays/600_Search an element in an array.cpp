// Question - https://www.codechef.com/practice/course/arrays/ARRAYS/problems/SEARCHINARR

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            found = true;
            break;
        }
    }
    if (found)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    return 0;
}