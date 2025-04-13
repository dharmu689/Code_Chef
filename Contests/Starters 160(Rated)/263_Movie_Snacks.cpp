//Question - https://www.codechef.com/problems/MOVPR?tab=statement

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x,y,z;
	cin>>x>>y>>z;
	if((x+y)>z)
	{
	    cout<<(2*z)+y;
	}
	else
	{
	    cout<<(2*x)+(3*y);
	}

}
