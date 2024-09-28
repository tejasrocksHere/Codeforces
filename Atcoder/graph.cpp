#include <bits/stdc++.h>
using namespace std;

#define int long long
const int INF = 1e18;

void solve() {
    int N, M;
    cin >> N >> M;
    
    vector<vector<pair<int, int>>> adj(N + 1);
    vector<int> value(N + 1, INF);
    
    // Reading the edges
    for (int i = 0; i < M; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, -w});  // Reverse edge with negative weight
    }

    queue<int> q;
    value[1] = 0;  // Assign vertex 1 a value of 0 (arbitrary choice)
    q.push(1);

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        // Process all neighbors of vertex u
        for (auto [v, w] : adj[u]) {
            if (value[v] == INF) {
                value[v] = value[u] + w;
                q.push(v);
            } 
        }
    }

    // Output the result
    for (int i = 1; i <= N; i++) {
        cout << value[i] << " ";
    }
    cout << endl;
}

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}
