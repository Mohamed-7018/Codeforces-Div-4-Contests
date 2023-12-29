#include "bits/stdc++.h"

using namespace std;

typedef long long int ll;
#define all(a)  a.begin(),a.end()
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

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


vector<pair<ll, ll>> v;
ll ANS =0;
__gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ORDER_SET;

ll getSize(pair<ll, ll> item, bool flag) {
    if(flag ) return ORDER_SET.size();
    return    ORDER_SET.order_of_key(item.second);
}
void insert(ll n){
    ORDER_SET.insert(n);
}
void clear(){
    ORDER_SET.clear();
    v.clear();
}
void solve(ll test_case) {

    clear();
    ll n;
    cin >> n;

    v.resize(n);
    for(auto &i  : v){
        cin >> i.first >> i.second;
    }

    sort(all(v));

    ANS = 0;
    ll B;
    for(auto item :v){
        ll A=getSize(item, true);
        ANS += A;
        B = getSize(item, false);
        ANS -=B;
        ll x =item.second;
        insert(x);
    }

    cout << ANS << endl;

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