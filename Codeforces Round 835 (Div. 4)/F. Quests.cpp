#include <bits/stdc++.h>
#include <iostream>

using namespace std;

#ifdef LOCAL
#include "debug.hpp"
#else
#define debug(...) 42
#endif
template<typename T>
using vc = std::vector<T>;
template<typename T>
using vvc = std::vector<vc<T>>;
template<typename T>
using vvvc = std::vector<vvc<T>>;

template<class T>
bool chmax(T &a, const T &b) {
    if (a < b) {
        a = b;
        return 1;
    }
    return 0;
}

template<class T>
bool chmin(T &a, const T &b) {
    if (a > b) {
        a = b;
        return 1;
    }
    return 0;
}

template<typename typC, typename typD>
istream &operator>>(istream &cin, pair<typC, typD> &a) { return cin >> a.first >> a.second; }

template<typename typC>
istream &operator>>(istream &cin, vector<typC> &a) {
    for (auto &x: a)
        cin >> x;
    return cin;
}

template<typename typC, typename typD>
ostream &operator<<(ostream &cout, const pair<typC, typD> &a) { return cout << a.first << ' ' << a.second; }

template<typename typC, typename typD>
ostream &operator<<(ostream &cout, const vector<pair<typC, typD>> &a) {
    for (auto &x: a)
        cout << x << '\n';
    return cout;
}

template<typename typC>
ostream &operator<<(ostream &cout, const vector<typC> &a) {
    int n = a.size();
    if (!n)
        return cout;
    cout << a[0];
    for (int i = 1; i < n; i++)
        cout << ' ' << a[i];
    return cout;
}

template<typename typC, typename typD>
bool cmin(typC &x, const typD &y) {
    if (x > y) {
        x = y;
        return 1;
    }
    return 0;
}

template<typename typC, typename typD>
bool cmax(typC &x, const typD &y) {
    if (x < y) {
        x = y;
        return 1;
    }
    return 0;
}

template<typename typC>
vector<typC> range(typC l, typC r, typC step = 1) {
    assert(step > 0);
    int n = (r - l + step - 1) / step, i;
    vector<typC> res(n);
    for (i = 0; i < n; i++)
        res[i] = l + step * i;
    return res;
}

#define ll long long
#define ld long double
#define ull unsigned long long int
#define ch char
#define str string

#define sz(s) (ll)(s.size())

#define vi vector<int>
#define vs vector<string>
#define vc vector<char>
#define vvs vector<vector<string>>
#define vl vector<long long>
#define vvl vector<vl>
#define vb vector<bool>
#define vvb vector<vb>
#define vps vector<pair<string, string>>
#define vpl vector<pair<ll, ll>>
#define vpsi vector<pair<string, int>>
#define vpsl vector<pair<string, ll>>

#define pii pair<int, int>
#define pll pair<ll, ll>
#define psv pair<string, vector<int>>

#define mll map<ll, ll>
#define mci map<char, int>
#define mcl map<char, ll>
#define msl map<string, ll>
#define msvs map<string, vector<string>>
#define msvl map<string, vector<ll>>
#define um un_orderedmap

#define qi queue<int>
#define ql queue<ll>
#define sc set<char>
#define si set<int>
#define sl set<ll>
#define mk make_pair

#define fi first
#define se second

#define SORT(v) sort(all(v))
#define REV(v) reverse(all(v))
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
#define MIN(v) *min_element(all(v))
#define MAX(v) *max_element(all(v))

#define pb push_back
#define ppb pop_back
#define ppf pop_front
#define eb emplace_back

#define F(I, S, E) for (int I = S; I < E; I++)
#define RF(I, S, E) for (int I = S; I > E; I--)

#define input(a, n)            \
    for (ll I = 0; I < n; I++) \
    {                          \
        cin >> a[I];           \
    }
#define show(C)           \
    for (auto J : C)      \
        cout << J << " "; \
    cout << endl;
#define showLn(C)          \
    for (auto J : C)       \
        cout << J << endl; \
    cout << endl;

#define _Depressed    \
    int(testcases);   \
    cin >> testcases; \
    while (testcases--)
#define _Depressed1 \
    int(testcases); \
    testcases = 1;  \
    while (testcases--)
const char nl = '\n';

void begin() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

#define PYES cout << "YES\n"
#define PNO cout << "NO\n"
#define PYes cout << "Yes\n"
#define PNo cout << "No\n"
#define Pyes cout << "yes\n"
#define Pno cout << "no\n"

//----------------------------------------------------------------------------//
//*------------------------------   GCD/LCM  ------------------------------------//
//----------------------------------------------------------------------------//
long long gcd(long long a, long long b) {
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a % b, b);
    return gcd(a, b % a);
}

ll lcm(ll a, ll b) {
    return a * (b / gcd(a, b));
}

//----------------------------------------------------------------------------//
//*------------------------------  Fast Power  ------------------------------------//
//----------------------------------------------------------------------------//
ll mypow(ll x, ll n) {
    ll result = 1;
    while (n > 0) {
        if (n % 2 == 1)
            result = result * x;

        x = x * x;
        n = n / 2;
    }

    return result;
}

//----------------------------------------------------------------------------//
//*---------------------------  Prime Check  -----------------------------------//
//----------------------------------------------------------------------------//
bool isPrime(ll x) {
    if (x <= 1)
        return false;
    for (ll i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return false;
        }
    }
    return true;
}

//----------------------------------------------------------------------------//
//*------------------------------   mod equations ------------------------------//
//----------------------------------------------------------------------------//
long long modSub(ll a, ll b, ll mod) {
    return ((a % mod - b % mod + mod) % mod);
}

ll modAdd(ll a, ll b, ll mod) {
    return ((a % mod) + (b % mod)) % mod;
}

ll modMul(ll a, ll b, ll mod) {
    return ((a % mod) * (b % mod)) % mod;
}

ll gcdExtended(ll a, ll b, ll *x, ll *y);

ll modInv(int A, int M) {
    ll x, y;
    ll g = gcdExtended(A, M, &x, &y);
    if (g != 1)
        cout << "Inverse doesn't exist";

    ll res = (x % M + M) % M;
    return res;
}

ll gcdExtended(ll a, ll b, ll *x, ll *y) {
    if (a == 0) {
        *x = 0, *y = 1;
        return b;
    }

    ll x1, y1;
    ll gcd = gcdExtended(b % a, a, &x1, &y1);

    *x = y1 - (b / a) * x1;
    *y = x1;

    return gcd;
}

ll modDiv(ll a, ll b, ll mod) {
    a = a % mod;
    ll inv = modInv(b, mod);
    ll res = (inv * a) % mod;
    return res;
}

//----------------------------------------------------------------------------//
//*-------------------------------  Graph Class  -------------------------------//
//----------------------------------------------------------------------------//
class Graph {
    int v;
    vector<list<int>> adj;

public:
    Graph(int v);

    void addEdge(int v, int w);

    void BFS(int s);

    // dfs variables
    map<int, bool> dfsVisited;

    void DFS(int v);
};

Graph::Graph(int v) {
    this->v = v;
    adj.resize(v);
}

// -------------------------------------------------------------------------- //
// -------------------------- Graph DFS - BFS ------------------------------- //
// -------------------------------------------------------------------------- //
void Graph::addEdge(int v, int w) {
    adj[v].pb(w);
}

void Graph::BFS(int s) {
    vector<bool> visited;
    visited.resize(v, false);

    list<int> queue;

    visited[s] = true;
    queue.pb(s);

    while (!queue.empty()) {
        s = queue.front();
        cout << s << " ";
        queue.pop_front();

        for (auto adjacent: adj[s]) {
            if (!visited[adjacent]) {
                visited[adjacent] = true;
                queue.pb(adjacent);
            }
        }
    }
}

void Graph::DFS(int v) {
    dfsVisited[v] = true;
    cout << v << " ";
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i) {

        if (!dfsVisited[*i])
            DFS(*i);
    }
}

vector<int> dx = {0, 0, 1, -1};
vector<int> dy = {1, -1, 0, 0};
vector<pair<int, int>> dxy = {{-1, 0},
                              {1,  0},
                              {0,  -1},
                              {0,  1}};

// --------------------------------------------------------------------------- //
// --------------------- Main Function (solve )------------------------------- //
// -------------------------------------------------------------------------- //
void solve() {
    ll n, c, d;
    cin >> n >> c >> d;

    vl a(n), aa(n);
    cin >> a;

    sort(all(a), greater<ll>());

    aa[0] = a[0];
    F(i, 1, n) aa[i] = aa[sz(aa) - 1] + a[i];
    ll l = 0, r = d + 2;

    if (a[0] >= c) cout << "Infinity";
    else if (a[0] * d < c) cout << "Impossible";
    else {

       while(l<r){
           ll mid = l + (r - l + 1) / 2;
           ll sum = 0;
           F(i, 0, d) if (i % mid < n) sum += a[i % mid];
           if (sum >= c) l = mid;
           else r = mid - 1;
       }

        if(l==d+2) cout << "Infinity";
        else if(l==0) cout <<"Impossible";
        else cout << l-1 ;
    }
    cout<<nl;
}

int main() {
    begin();

    //    freopen("entertain.in", "r", stdin);
    _Depressed {
        solve();
    }
    return 0;
}