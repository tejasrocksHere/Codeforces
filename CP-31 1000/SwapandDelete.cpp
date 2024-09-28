#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

void solve() {
    string s;
    cin >> s;

    int c0 = 0, c1 = 0;
    for (char c : s) {
        if (c == '0') c0++;
        else c1++;
    }

    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0' && c1 > 0) { 
            c1--;
            ans++;
        }
        else if (s[i] == '1' && c0 > 0) {
            c0--;
            ans++;
        }
        else {
            break;
        }
    }

    cout << s.size() - ans << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
