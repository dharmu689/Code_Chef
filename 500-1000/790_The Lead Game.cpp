//Question - https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/TLG

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int player1_score = 0, player2_score = 0;
    int max_lead = 0, winner = 0;

    for (int i = 0; i < n; i++) {
        int s1, s2;
        cin >> s1 >> s2;

        player1_score += s1;
        player2_score += s2;

        int lead = abs(player1_score - player2_score);
        int current_winner = (player1_score > player2_score) ? 1 : 2;

        if (lead > max_lead) {
            max_lead = lead;
            winner = current_winner;
        }
    }

    cout << winner << " " << max_lead << endl;
    return 0;
}
