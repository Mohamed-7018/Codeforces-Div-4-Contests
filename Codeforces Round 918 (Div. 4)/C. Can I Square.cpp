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
const ll N = 1e5 + 9, INF = INT_MAX, MOD = 1e9 + 7, LOG = 20;


void solve (int test_case){
    ll n; cin >> n;
    vector<ll> v(n);
    ll sum=0;
   for(int i = 0; i < n ; i++){
        cin >> v[i];
        sum+=v[i];
    }
    double long x = sqrt(sum);
    int y = x;
    if (x == y) cout << "YES\n";
    else cout << "NO\n";

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