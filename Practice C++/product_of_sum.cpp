//Question - https://www.codechef.com/practice/course/cpp/LPCPAS11/problems/LCPPAS162?tab=statement
//Solution - https://www.codechef.com/viewsolution/1111464216

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
    cin>>n;
    int sum = 0;
    int product = 1;
    while(n != 0)
    {
        sum += (n % 10);
        product = product * (n % 10);
        n /= 10;
    }
    cout<< sum<< " " << product<<"\n";

}
