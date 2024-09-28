#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve() {
    int n;
    cin >> n;  // Read the value of n before using it

    vector<int> v1(n);
    vector<int> v2(n);

    int maxi1 = 0;
    int maxi2 = 0;

    for (int i = 0; i < n; i++) {
        cin >> v1[i];
        if (v1[i] > v1[maxi1])  // Finding the maximum index in v1
            maxi1 = i;
    }

    for (int i = 0; i < n; i++) {
        cin >> v2[i];
        if (v2[i] > v2[maxi2])  // Finding the maximum index in v2
            maxi2 = i;
    }

    cout << v1[maxi1] + v2[maxi2] << endl;  // Sum of the max elements from both arrays
}

signed main() {
    int t = 1;
    while (t--) {
        solve();
    }

    return 0;
}
