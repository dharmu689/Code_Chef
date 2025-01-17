//Question - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/NETFLIX
//Solution - https://www.codechef.com/viewsolution/1114368367

#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, x;
        cin >> a >> b >> c >> x;
        if ((a + b) >= x || (b + c) >= x || (a + c) >= x)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
    return 0;

}