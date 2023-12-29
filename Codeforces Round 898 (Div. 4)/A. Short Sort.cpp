#include "bits/stdc++.h"

using namespace std;

typedef long long int ll;
#define all(a)  a.begin(),a.end()

int dx[] = {+0, +0, -1, +1, +1, +1, -1, -1};
int dy[] = {-1, +1, +0, +0, +1, -1, +1, -1};

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
const int N = 1e5+5 , INF = INT_MAX, MOD = 1e9 + 7, LOG = 20;

void solve(int test_case) {
    string s; cin >> s;
    string sorted = s;
    sort(all(sorted));
    int cnt =0;
    for (int i =0; i < 3; i++) {
        if (sorted[i] != s[i]) {
            cnt++;
        }
    }

    if (cnt <=2) cout << "YES"<<endl;
    else cout << "NO" << endl;
}

int main() {
    _Depressed();
    ll tc;
    tc = 1;
    cin >> tc;
    for(int test_case=1;test_case<=tc;test_case++) {
        solve(test_case);
    }
}