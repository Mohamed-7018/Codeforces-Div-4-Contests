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
    int n,k;
    cin >> n >> k;

    string s; cin >> s;
    int l = 0, ANS =0;
    while(l<n) {
        if (s[l] =='B') {
            ANS ++;
            l+=k;
        }else l++;
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