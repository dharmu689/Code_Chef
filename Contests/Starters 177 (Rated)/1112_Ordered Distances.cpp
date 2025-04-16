// Question - https://www.codechef.com/problems/ORDDIST?tab=statement

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
        vector<int> X(N), Y(N);
        for (int i = 0; i < N; ++i)
            cin >> X[i];
        for (int i = 0; i < N; ++i)
            cin >> Y[i];

        int result = -1;
        for (int i = 0; i < N; ++i)
        {
            vector<pair<int, int>> distances;
            for (int j = 0; j < N; ++j)
            {
                distances.push_back({abs(X[j] - X[i]), X[j]});
            }
            sort(distances.begin(), distances.end());
            vector<int> generatedY;
            for (const auto &pair : distances)
            {
                generatedY.push_back(pair.second);
            }
            if (generatedY == Y)
            {
                result = i + 1;
                break;
            }
        }
        cout << result << endl;
    }
}