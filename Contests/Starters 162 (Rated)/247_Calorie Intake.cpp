//Question - https://www.codechef.com/problems/CALINTAKE?tab=statement

#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int x, y, z;
    cin >> x >> y >> z;
    if (x >= (y * z))
    {
        cout << x - (y * z);
    }
    else
    {
        cout << "-1";
    }

}