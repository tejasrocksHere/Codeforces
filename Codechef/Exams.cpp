#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve() {
    // Write your solution here
    int x,y,z;
    cin>>x>>y>>z;

    x=x*y;
    float percentage =((float)z/(float)x)*100;
    // cout<<x<<endl;
    // cout<<percentag
    if(percentage<=50){
        cout<<"NO"<<endl;
    }
    else
    cout<<"YES"<<endl;

    
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
