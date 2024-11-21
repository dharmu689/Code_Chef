//Question - https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/PRACTICEPERF?tab=statement
//Solution - https://www.codechef.com/viewsolution/1108535050

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int p1,p2,p3,p4,c=0;
	cin>>p1>>p2>>p3>>p4;
	if(p1>=10)
	{
	    c++;
	}
	if(p2>=10)
	{
	    c++;
	}
	if(p3>=10)
	{
	    c++;
	}
	if(p4>=10)
	{
	    c++;
	}
	cout<<c;

}
