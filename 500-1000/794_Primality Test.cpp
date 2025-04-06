// Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/PRB01

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        if (N < 2)
        {
            cout << "no" << endl;
            continue;
        }

        bool isPrime = true;
        for (int i = 2; i <= sqrt(N); i++)
        {
            if (N % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        cout << (isPrime ? "yes" : "no") << endl;
    }
}