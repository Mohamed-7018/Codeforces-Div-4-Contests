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
    vector<string> s(3);
    for(auto &i : s) cin >> i;


    for(auto a : s) {

        int A=0,B=0,C=0;
        bool print = false;
        for(auto i: a) {
            if (i == 'A')A++;
            else if(i == 'B') B++;
            else if(i =='C')C++;
            else print = true;
        }
        if(print) {
            if(A==0) cout <<'A';
            else if(B==0) cout << 'B';
            else cout << 'C';
            cout <<endl;
        }
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