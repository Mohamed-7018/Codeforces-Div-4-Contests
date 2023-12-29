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
    ll n, k;
    cin >> n >> k;
    ll n1 = n - (k - 1);
    if (n1 > 0 && n1 % 2 == 1) {
        cout << "YES" << endl;
        for(int i=0;i<k-1;i++) cout << "1 ";
        cout << n1 << endl;
        return;
    }
    ll n2 = n - 2 * (k - 1);
    if (n2 > 0 && n2 % 2 == 0) {
        cout << "YES\n";
        for(int i=0;i<k-1;i++) cout << "2 ";
        cout << n2 << endl;
        return;
    }
    cout << "NO" << endl;
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