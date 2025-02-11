//Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/C_RATING
//Solution - https://www.codechef.com/viewsolution/1130100689

#include <bits/stdc++.h>

using namespace std;

// Function to calculate the minimum number of games needed
int min_games_to_reach_rating(int X, int Y) {
    if (X >= Y) {
        return 0;  // If current rating is already greater or equal to Y
    }
    return ceil((Y - X) / 8.0);
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; ++i) {
        int X, Y;
        cin >> X >> Y;
        cout << min_games_to_reach_rating(X, Y) << endl;
    }

    return 0;
}
