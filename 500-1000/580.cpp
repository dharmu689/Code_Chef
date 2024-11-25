//Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TODOLIST?tab=statement
//Solution - https://www.codechef.com/viewsolution/1108978235

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0;
        cin >> n;
        while (n--)
        {
            int d;
            cin>>d;
            if(d>=1000)
            {
                c++;
            }
        }
        cout << c << endl;


    }
    return 0;

}