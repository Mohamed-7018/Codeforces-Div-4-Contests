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
const int N = 1e5 + 5, INF = INT_MAX, MOD = 1e9 + 7, LOG = 20;

void solve(int test_case) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    ll ANS = 1;
    sort(all(a));
    a[0]++;

    for (auto it: a) {
        ANS *= it;
    }

    cout << ANS << endl;
}

int main() {
    _Depressed();
    ll tc;
    tc = 1;
    cin >> tc;
    for (int test_case = 1; test_case <= tc; test_case++) {
        solve(test_case);
    }
}