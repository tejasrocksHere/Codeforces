#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve() {
    // Write your solution here
    
    int  n,x;
    cin>>n>>x;
    int ans=(n/6)*x;
    if(n%6!=0)
    ans+=x;
cout<<ans<<endl;

}

signed main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int t;
    cin >> t; // Read the number of test cases from input.txt
    while (t--) {
         solve();
    }

    return 0;
}
