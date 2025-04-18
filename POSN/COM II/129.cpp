//debug//
#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool check(int idx, int col, int color[], vector<int> adj[]) {
    color[idx] = col;
    for (auto it : adj[idx]) {
        cout << "Checking vertex " << it << endl;
        if (color[it] == -1) {
            if (check(it, !col, color, adj))
                return true;
        } else if (color[it] == col)
            return true;
    }
    return false;
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    cout.tie(NULL);
    int n, e;
    cin >> n >> e;
    vector<int> adj[n];
    int color[n];
    memset(color, -1, sizeof(color));
    for (int i = 0; i < e; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    cout << "Vertices and their adjacency lists:" << endl;
    for (int i = 0; i < n; i++) {
        cout << i << ": ";
        for (int j : adj[i]) {
            cout << j << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++) {
        if (color[i] == -1) {
            cout << "Starting DFS from vertex " << i << endl;
            if (check(i, 0, color, adj)) {
                cout << "false";
                return 0;
            }
        }
    }
    cout << "true";
    return 0;
}