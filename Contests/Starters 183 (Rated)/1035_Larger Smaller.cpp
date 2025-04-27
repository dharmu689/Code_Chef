// Question - https://www.codechef.com/problems/LARGSMALL

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        vector<int> A(N);
        int minVal = 1e9, maxVal = -1e9;
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
            minVal = min(minVal, A[i]);
            maxVal = max(maxVal, A[i]);
        }

        int result = max(0, maxVal - minVal - 1);
        cout << result << endl;
    }
    return 0;
}