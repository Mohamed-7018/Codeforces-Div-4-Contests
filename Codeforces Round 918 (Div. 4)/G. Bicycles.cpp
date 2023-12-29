#include "bits/stdc++.h"

using namespace std;

typedef long long int ll;
#define all(a)  a.begin(),a.end()

ll dx[] = {+0, +0, -1, +1, +1, +1, -1, -1};
ll dy[] = {-1, +1, +0, +0, +1, -1, +1, -1};

void _Depressed() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

const ll OO = 0X3F3F3F3F3F3F3F3F;
const ll N = 1e3 + 9, INF = INT_MAX, MOD = 1e9 + 7, LOG = 20;



int n,s[N];
vector<pair<int,int>> adj[N];
ll dist[N][N];

void dijkstra(){
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= 1000; ++j) {
            dist[i][j] = 1e18;
        }
    }
    priority_queue<pair<ll,pair<int,int>>,vector<pair<ll,pair<int,int>>>,greater<>>q;
    dist[0][s[0]] = 0;
    q.push({0,{s[0],0}});
    while (!q.empty()){
        ll d = q.top().first;
        int sl = q.top().second.first;
        int u = q.top().second.second;
        q.pop();
        if(dist[u][sl] != d)continue;
        for(auto v:adj[u]){
            if(d + v.second * sl < dist[v.first][min(sl,s[v.first])]){
                dist[v.first][min(sl,s[v.first])] = d + v.second * sl;
                q.push({dist[v.first][min(sl,s[v.first])],{min(sl,s[v.first]),v.first}});
            }
        }
    }
    ll ans = 1e18;
    for (int i = 1; i <= 1000; ++i) {
        ans = min(ans,dist[n-1][i]);
    }
    cout << ans << endl;
}

void solve (int test_case){
    int m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        adj[i].clear();
    }
    for (int i = 0; i < m; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        u--, v--;
        adj[u].emplace_back(v, w);
        adj[v].emplace_back(u, w);
    }
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
    }
    dijkstra();

}
int main() {
    _Depressed();
    int testCases;
    testCases = 1;
    cin >> testCases;
    while (testCases--) {
        solve(testCases);
    }
}