#include <bits/stdc++.h>
using namespace std;

vector<tuple<int, int, int>> edge;
int x[10001], y[10001], pa[10001], ans = 0;

int fp(int n)
{
    if (pa[n] == n)
        return n;
    return pa[n] = fp(pa[n]);
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i] >> y[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            edge.push_back({abs(x[i] - x[j]) + abs(y[i] - y[j]), i, j});
        }
    }
    for (int i = 0; i < n; i++)
    {
        pa[i] = i;
    }
    sort(edge.begin(), edge.end());
    for (auto it : edge)
    {
        int w = get<0>(it), u = get<1>(it), v = get<2>(it);
        if (fp(u) != fp(v))
        {
            ans += w;
            pa[fp(v)] = fp(u);
        }
    }
    cout << ans;
}