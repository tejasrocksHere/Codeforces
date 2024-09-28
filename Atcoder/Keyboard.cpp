#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

void solve() {
    string S;
    cin >> S;

    // Map each letter to its index in the given permutation S
    map<char, int> position;
    for (int i = 0; i < 26; i++) {
        position[S[i]] = i + 1;  // 1-based index for each letter
    }

    // Start with the position of 'A'
    int current_pos = position['A'];
    int total_distance = 0;

    // Now go through the alphabet from 'B' to 'Z'
    for (char ch = 'B'; ch <= 'Z'; ch++) {
        int next_pos = position[ch];
        total_distance += abs(next_pos - current_pos);
        current_pos = next_pos;  // Move to the new position
    }

    // Output the total distance
    cout << total_distance << endl;
}

signed main() {
    int t = 1;
    // cin >> t; // Uncomment if multiple test cases are needed
    while (t--) {
        solve();
    }

    return 0;
}
