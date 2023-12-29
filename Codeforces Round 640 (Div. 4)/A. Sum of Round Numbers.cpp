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

vector<ll> solv3 (ll n) {
    ll t = 0;
    vector<ll> ans;
    while(n>0) {
        if(n%10 * pow(10,t)!=0) ans.push_back(n%10 * pow(10,t));
        t++;
        n/=10;
    }
    return ans;
}


void solve (int test_case){
    ll n;
    cin >> n;
    vector<ll> ans = solv3(n);
    reverse(ans.begin(),ans.end());
    cout<< ans.size()<< endl;
    for(auto i : ans) cout << i << ' ';
    cout<<endl;
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