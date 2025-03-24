// Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/T20MCH

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes herei

    int r, o, g;
    cin >> r >> o >> g;
    int og = (20 - o) * 6 * 6;
    int tg = g + og;
    if (r > og)
    {
        cout << "no";
    }
    else
    {
        cout << "yes";
    }
}