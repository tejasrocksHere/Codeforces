#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int change = k - 1;
    int e_count = 0; // Count of even numbers
    bool divisible = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            e_count++;

        if (arr[i] % k == 0) {
            divisible = true;
        } else {
            change = min(change, k - arr[i] % k);
        }
    }

    // If there's any element divisible by k, no changes needed
    if (divisible) {
        cout << 0 << endl;
        return;
    }

    if (k != 4) {
        // For k other than 4, just print the minimum change required
        cout << change << endl;
    } else {
        // Special case for k = 4
        if (e_count >= 2) {
            cout << 0 << endl;
        } else if (e_count == 1) {
            cout << min(1LL, change) << endl;
        } else {
            cout << min(2LL, change) << endl;
        }
    }
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
