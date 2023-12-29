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


ll bs ( ll a[], ll x, ll n) {
    ll l = 0, r= n-1;
    ll mid; ll ret = -1 ;
    while (l<=r) {
        mid = (l+r)/2;
        if(a[mid]<x) l = mid+1;
        else {
            ret = mid;
            r = mid-1;
        }
    }
    return ret;
}

void solve (int test_case){
    ll n,q; cin >> n >> q;
    vector<ll> a(n); for(auto &i : a) cin >>i;
    sort(all(a));
    reverse(all(a));

    ll aa[n];
    for(int i=0;i<n;i++) if(!i) aa[i] = a[i]; else aa[i] = a[i] + aa[i-1];

    for(int i=0;i<q;i++) {
        ll x; cin >> x;
        ll ans = bs (aa,x, n);
        (ans ==-1) ? cout <<   ans   << endl : cout <<    ans + 1   << endl;
    }
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