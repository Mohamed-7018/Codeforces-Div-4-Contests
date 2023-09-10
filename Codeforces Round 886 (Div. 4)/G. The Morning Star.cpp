#include <bits/stdc++.h>
#define startt ios_base::sync_with_stdio(false);cin.tie(0);
typedef long long  ll;
using namespace std;
#define vint vector<int>
#define all(v) v.begin(), v.end()
#define int long long
 
void solve()
{
    int n;
    cin >> n;
    map<int, int> up, side, diag1, diag2;
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        up[x]++;
        side[y]++;
        diag1[x-y]++;
        diag2[x+y]++;
    }
    for(auto x : up)
    {
        ans+=x.second*(x.second-1);
    }
    for(auto x : side)
    {
        ans+=x.second*(x.second-1);
    }
    for(auto x : diag1)
    {
        ans+=x.second*(x.second-1);
    }for(auto x : diag2)
    {
        ans+=x.second*(x.second-1);
    }
    cout << ans << endl;
}
 
int32_t main(){
    startt
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}