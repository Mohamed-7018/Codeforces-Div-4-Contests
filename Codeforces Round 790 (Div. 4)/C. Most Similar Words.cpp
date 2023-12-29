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


ll count (string s1, string s2) {
    int sum =0;
    for(int i=0;i<s1.size();i++) {
        sum += abs(s1[i] - s2[i]);
    }
    return sum;
}

void solve (int test_case){
    ll n,m;
    cin >> n >> m;

    vector<string> s(n);
    for(auto &i : s) cin >> i;

    ll ans = INT_MAX;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            ans = min (count(s[i],s[j]),ans);
    cout << ans <<endl;

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