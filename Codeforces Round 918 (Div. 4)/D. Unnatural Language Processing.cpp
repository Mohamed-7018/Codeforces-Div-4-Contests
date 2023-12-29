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


bool isgood(char a) {
    if (a== 'a' or a== 'e') return true;
    else return false;
}

void solve(ll test_case) {
    int n;
    cin  >> n;


    string s;
    cin >> s;
    vector<char>ANS;

    for(int i=0;i<n;i++) {
        if(!isgood(s[i])  and i+1 <n && i+ 2 < n && isgood(s[i+1]) && !isgood(s[i+2]) ){
            if(i+3 <n && !isgood(s[i+3]) || i+3 >= n){
                ANS.push_back(char(s[i]));
                ANS.push_back(char(s[i+1]));
                ANS.push_back(char(s[i+2]));
                ANS.push_back('.');
                i+=2;
            }else {
                ANS.push_back(char(s[i]));
                ANS.push_back(char(s[i+1]));
                ANS.push_back('.');
                i+=1;
            }

        }else  {
            ANS.push_back(char(s[i]));
            ANS.push_back(char(s[i+1]));
            ANS.push_back('.');
            i+=1;
        }
    }

    for(int i=0;i<ANS
                          .size() -1 ;i++) cout << ANS[i] ;
    cout << endl;

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