// Question - https://www.codechef.com/problems/FOODBAL?tab=statement

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int f1, p1, f2, p2;
    cin >> f1 >> p1 >> f2 >> p2;
    int f = abs(f1 - p1);
    int s = abs(f2 - p2);
    if (f > s)
    {
        cout << "second";
    }
    else if (f == s)
    {
        cout << "both";
    }
    else
    {
        cout << "first";
    }
}