// Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLOW017

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int x = a + b + c - max({a, b, c}) - min({a, b, c});
        cout << x << endl;
    }
}

/*

#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a > b && a < c) || (a > c && a < b))
        {
            cout << a << endl;
        }
        else if ((b > a && b < c) || (b > c && b < a))
        {
            cout << b << endl;
        }
        else
        {
            cout << c << endl;
        }
    }


}

*/