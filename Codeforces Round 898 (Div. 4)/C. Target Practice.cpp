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
  char rings[10][10];
  int ANS = 0;
  for (int i=0;i<10;i++) {
      for (int j = 0; j < 10; j++) {
          cin >> rings[i][j];
      }
  }
    for (int i = 0; i < 10; ++i){
        for (int j = 0; j < 10; ++j){
            if (rings[i][j] == 'X') {
                int x;
                if (j <= 4) x = 4 - j;
                else x = j - 5;
                int y;
                if (i <= 4) y = 4 - i;
                else y = i - 5;
                ANS += 5 - max(x, y);
            }
        }
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