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



void solve (int test_case){
    ll n, m;
    cin >> n >> m;
    ll c[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) {
            cin >> c[i][j];
        }
    }

    ll sum[n][m];

    ll ans = LLONG_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) {
            sum[i][j] = c[i][j];
            ll ii =i-1  , ij =j-1;

            while (ii>=0 && ij >= 0) {
                sum[i][j] +=c[ii][ij];
                ii --;
                ij -- ;
            }
            ii = i-1, ij = j+1;
            while (ii>=0 && ij  < m) {
                sum[i][j] +=c[ii][ij];
                ii --;
                ij ++ ;
            }

            ii = i+1, ij = j-1;
            while (ii < n && ij >= 0) {
                sum[i][j] +=c[ii][ij];
                ii ++;
                ij -- ;
            }
            ii = i+1,ij = j +1;
            while (ii < n && ij < m) {
                sum[i][j] +=c[ii][ij];
                ii ++;
                ij ++ ;
            }
            ans = max(ans,sum[i][j]);
        }
    }
    cout << ans << endl;

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