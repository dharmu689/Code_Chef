//Question - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FLOW006?tab=statement
//Solution - https://www.codechef.com/viewsolution/1107558115

#include <bits/stdc++.h>

using namespace std;

int main() 
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, s = 0;
        cin >> n;
        while (n != 0)
        {
            s = s + (n % 10);
            n = (n / 10);
            
        }
        cout << s << endl;
        
    }

}


