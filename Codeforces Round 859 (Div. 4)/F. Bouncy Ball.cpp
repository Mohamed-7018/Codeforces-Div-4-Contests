#include <bits/stdc++.h>
#include <iostream>

using namespace std;

#ifdef LOCAL
#include "debug.hpp"
#else
#define debug(...) 42
#endif
template<typename T> using vc = std::vector<T>;
template<typename T> using vvc = std::vector<vc<T>>;
template<typename T> using vvvc = std::vector<vvc<T>>;

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
    for (auto &x: a) cin >> x;
    return cin;
}

template<typename typC, typename typD>
ostream &operator<<(ostream &cout, const pair<typC, typD> &a) { return cout << a.first << ' ' << a.second; }

template<typename typC, typename typD>
ostream &operator<<(ostream &cout, const vector<pair<typC, typD>> &a) {
    for (auto &x: a) cout << x << '\n';
    return cout;
}

template<typename typC>
ostream &operator<<(ostream &cout, const vector<typC> &a) {
    int n = a.size();
    if (!n) return cout;
    cout << a[0];
    for (int i = 1; i < n; i++) cout << ' ' << a[i];
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
    for (i = 0; i < n; i++) res[i] = l + step * i;
    return res;
}

#define ll  long long
#define ld  long double
#define ull unsigned long long int
#define ch char
#define str string


#define sz(s)    (ll)(s.size())


#define vi  vector<int>
#define vs  vector<string>
#define  vvs vector < vector < string >>
#define vl  vector<long long>
#define vps  vector<pair<string, string>>
#define vpl  vector<pair<ll, ll>>
#define vpsi  vector<pair<string, int>>
#define vpsl  vector<pair<string, ll>>

#define pii pair<int, int>
#define pll pair < ll, ll>
#define psv pair<string, vector<int>>

#define mll map<ll,ll>
#define mci map<char,int>
#define mcl map<char,ll>
#define msvs map<string,vector<string>>
#define msvl map<string,vector<ll>>
#define  um un_orderedmap


#define qi  queue<int>
#define ql  queue<ll>
#define sc  set<char>
#define si  set<int>
#define sl  set<ll>
#define mk  make_pair


#define fi first
#define se second

#define SORT(v) sort(all(v))
#define REV(v) reverse(all(v))
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define MIN(v) *min_element(all(v))
#define MAX(v) *max_element(all(v))


#define pb push_back
#define ppb pop_back
#define ppf pop_front
#define eb emplace_back


#define F(I, S, E)  for (int I = S; I < E; I++)
#define RF(I, S, E)  for (int I = S; I > E; I--)

#define input(a, n)            \
    for (ll I = 0; I < n; I++) \
    {                          \
        cin >> a[I];           \
    }
#define show(C)           \
    for (auto J : C)      \
        cout << J << " "; \
    cout << endl;
#define showLn(C)           \
    for (auto J : C)      \
        cout << J << endl; \
    cout << endl;

#define _Depressed                                                                                                                                                   \
    int(testcases);                                                                                                                                           \
    cin >> testcases;\
    while(testcases--)
#define _Depressed1 \
    int(testcases); \
    testcases = 1;  \
    while(testcases--)


ll mypow(ll x, ll n) {
    ll result = 1;
    while (n > 0) {
        if (n % 2 == 1) result = result * x;

        x = x * x;
        n = n / 2;
    }

    return result;
}

void begin() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

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

#define PYES cout << "YES\n"
#define PNO cout << "NO\n"
#define PYes cout << "Yes\n"
#define PNo cout << "No\n"
#define Pyes cout << "yes\n"
#define Pno cout << "no\n"



//*----------------------------------------------------------------------------*//
//*----------------------------------   GCD ------------------------------------//
//*----------------------------------------------------------------------------*//
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


// --------------------------------------------------------------------------- //
// --------------------- Main Function (solve )------------------------------- //
// -------------------------------------------------------------------------- //


void solve() {
   ll H,W,x,y,x2,y2;
   cin >> H>>W>>x>>y>>x2>>y2;
   string S;
   cin >> S;

    ll dx = 0, dy = 0;
    dx = (S[0] == 'D' ? 1 : -1);
    dy = (S[1] == 'R' ? 1 : -1);
    ll ANS = 0;
    F(i,0,5 * H * W + 100) {
        if (x == x2 && y == y2)  {
            cout <<ANS << endl;
            return;
        }
        bool xxx = 0;
        if (dx == 1 && x == H) dx = -1, xxx = 1;
        if (dx == -1 && x == 1) dx = 1, xxx = 1;
        if (dy == 1 && y == W) dy = -1, xxx = 1;
        if (dy == -1 && y == 1) dy = 1, xxx = 1;
        if (xxx) ++ANS;
        x += dx, y += dy;
    }
    cout  << - 1 <<endl;

}

int main() {
    begin();
    _Depressed {
        solve();
    }
    return 0;
}