#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define all(x) (x).begin(), (x).end()
#define endl '\n'


void _Depressed() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int dx[] = {+0, +0, -1, +1, +1, +1, -1, -1};
int dy[] = {-1, +1, +0, +0, +1, -1, +1, -1};
const ll OO = 0X3F3F3F3F3F3F3F3F;
const int N = 3e5 + 5, INF = INT_MAX, MOD = 1e9 + 7, LOG = 20;

ll a[N], dp[N][65];

void solve() {
    int n, k;
    cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        dp[i][a[i]] = 1;
    }

    for (int i = 1; i <= n; i++) {
        for (int j=0;j<64;j++) {
            dp[i][j] += dp[i-1][j];
            dp[i][j&a[i]] += dp[i-1][j];
            dp[i][j] %=MOD;
            dp[i][j&a[i]] %=MOD;
        }
    }

    ll ANS =0;

    for (int i=0;i< 1<<6; i++) {
        if (__builtin_popcount (i) == k) {
            ANS = (ANS + dp[n][i])%MOD;
        }
    }

    cout << ANS << endl;

    for (int i=0;i<=n;i++) {
        for (int j=0;j<64;j++) {
            dp[i][j] =0;
        }
    }

}


signed main() {
    _Depressed();
    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
    }
}