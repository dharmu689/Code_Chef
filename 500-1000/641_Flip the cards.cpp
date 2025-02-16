//Quesyion - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/FLIPCARDS
//Solution - https://www.codechef.com/viewsolution/1126950603

#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        int facedown = n-x;
        
        if(n == x)
        {
            cout<<"0"<<endl;
        }
        
         else if(n == facedown)
        {
            cout<<"0"<<endl;
        }
        
        else if (x < facedown || x>facedown || x==facedown)
        {
            if(x<facedown)
            {
                cout<<x<<endl;
            }
            else if (x>facedown)
            {
                cout<<facedown<<endl;
            }
            else
            {
                cout<<facedown<<endl;
            }
        }

    }

}

// cout<<min(x,(n-x))<<endl;