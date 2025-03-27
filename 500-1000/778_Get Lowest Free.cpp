// Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/SALE

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
        cout << (a + b + c - min({a, b, c})) << endl;
    }
}

// 2nd approch

/*

#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,c;
cin>>a>>b>>c;
int min = a;
if(a>b)
{
min =b;
}
else if(b>c)
{
min=c;
}
cout<<a+b+c-min<<endl;
}

*/