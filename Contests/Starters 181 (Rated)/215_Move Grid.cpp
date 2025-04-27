// Question - https://www.codechef.com/problems/MOVEMENT?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int x = a - c;
    int y = b - d;
    cout << x << " " << y;
    return 0;
}