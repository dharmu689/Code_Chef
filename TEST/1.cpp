//Question - https://www.codechef.com/START164D/problems/SPC2025Q2

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K, P;
        cin >> N >> K >> P;
        vector<int> chairs(N);

        for (int i = 0; i < N; ++i) {
            cin >> chairs[i];
        }

        // Find the tallest chair for Ved
        sort(chairs.begin(), chairs.end());
        int tallestChair = chairs.back();
        chairs.pop_back();

        // Calculate Ved's and Varun's heights
        int vedHeight = K + tallestChair;
        int varunHeight = P;
        for (int chair : chairs) {
            varunHeight += chair;
        }

        // Determine who has the better view
        if (vedHeight > varunHeight) {
            cout << "Ved" << endl;
        } else if (varunHeight > vedHeight) {
            cout << "Varun" << endl;
        } else {
            cout << "Equal" << endl;
        }
    }

    return 0;
}
