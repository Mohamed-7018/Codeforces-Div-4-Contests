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
    cin>>n;

    int arr[n];
    for (int i=0;i<n;i++) cin >> arr[i];

    int a=0,b=0,moves=1, j = n-1,i=1;
    a = arr[0];
    bool alice = false;
    int prev=arr[0];
    for (;i<=j;) {
        if(!alice){
            int temp = 0;
            for (;j>=i; --j) {
                temp += arr[j];
                if(temp>prev){
                    j--;
                    break;
                }
            }
            b += temp;
            prev = temp;
            alice = true;
            moves++;
            continue;
        }
        int temp = 0;
        for (;i<=j;i++) {
            temp += arr[i];
            if(temp>prev){
                i++;
                break;
            }
        }
        a+= temp;
        prev = temp;
        moves++;
        alice = false;
    }
    cout<<moves<<" "<<a<<" "<<b<<'\n';
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