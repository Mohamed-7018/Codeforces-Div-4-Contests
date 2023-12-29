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


bool isEven(ll n){
    return n%2 == 0;
}

map<ll, ll> m;
bool  flag = false;
void print(bool flag ){
    if (flag) cout << "YES\n";
    else cout << "NO\n";
}
void doMap (ll sum){
    if (!m[sum])m[sum]++;
    else flag = true;
}
void solve(ll test_case) {
    m.clear();
    ll n;
    cin >> n;
    flag = false;

    vector<ll> a(n);
    for(auto &i : a) cin >> i;

    m[0] = 1;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (isEven(i)) sum = sum + a[i];
        else sum = sum - a[i];
        doMap(sum);


    }
    print(flag);

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