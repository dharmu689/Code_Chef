//Question - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/FLOW004?tab=hints
//Solution - https://www.codechef.com/viewsolution/1108270892

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,l;
	    cin>>n;
	    l=n%10;
	    while(n>9)
	    {
	        n=n/10;
	    }
	    cout<<l+n<<endl;
	    
	}

}
