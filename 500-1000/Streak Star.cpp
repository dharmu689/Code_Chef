#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to find the maximum streak value of an array
int maxStreak(vector<int>& A) {
    int n = A.size();
    int maxStreak = 1, currentStreak = 1;

    for (int i = 1; i < n; i++) {
        if (A[i] >= A[i-1]) {
            currentStreak++;
        } else {
            currentStreak = 1;
        }
        maxStreak = max(maxStreak, currentStreak);
    }

    return maxStreak;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, X;
        cin >> N >> X;
        vector<int> A(N);

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        // Calculate the initial maximum streak value without any modification
        int initialMaxStreak = maxStreak(A);

        // Try modifying each element and calculate the maximum streak value
        int maxPossibleStreak = initialMaxStreak;
        for (int i = 0; i < N; i++) {
            int originalValue = A[i];
            A[i] *= X;
            maxPossibleStreak = max(maxPossibleStreak, maxStreak(A));
            A[i] = originalValue; // Revert the change
        }

        cout << maxPossibleStreak << endl;
    }

    return 0;
}
