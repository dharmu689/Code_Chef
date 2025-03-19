// Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHEFRACES

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int X, Y, A, B;
        cin >> X >> Y >> A >> B;
        int chef_races[2] = {X, Y};
        int rival_races[2] = {A, B};
        int gold_medals = 0;
        for (int i = 0; i < 2; i++)
        {
            bool can_win = true;
            for (int j = 0; j < 2; j++)
            {
                if (chef_races[i] == rival_races[j])
                {
                    can_win = false;
                    break;
                }
            }
            if (can_win)
            {
                gold_medals++;
            }
        }
        cout << gold_medals << endl;
    }
}