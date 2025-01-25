
//Question - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/CGYM?tab=statement
//Solution - https://www.codechef.com/viewsolution/1124742283

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    if((x+y)<=z)
	    {
	        cout<<"2"<<endl;
	    } 
	    else if(x<=z)
	    {
	        cout<<"1"<<endl;
	    }
	    else
	    {
	        cout<<"0"<<endl;
	    }
	}

}
