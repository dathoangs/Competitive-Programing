#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fore(i,b,a) for(int i = b; i<a; i++)
#define null NULL
#define nl '\n'
#define yes "YES\n"
#define no "NO\n"
using namespace std;

ll p[100007];

ll find (ll u){
    if (u == p[u]) return u;
    return p[u] = find(p[u]);
}

bool merge(ll a, ll b){
    ll ra = find(a);
    ll rb = find(b);

    if (ra != rb){
        p[ra] = rb;
        return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    ll n, m, a, b, c;

    cin >> n >> m;

    tuple <ll, ll, ll> edges[m];

    fore (i,0,n+1){
        p[i] = i;
    }

    fore (i,0,m){
        cin >> a >> b >> c;
        edges[i] = {c, a, b};
    }

    sort (edges, edges+m);

    ll ans = 0;
    fore (i,0,m){
        if (merge(get<1>(edges[i]), get<2>(edges[i]))){
            ans += get<0>(edges[i]);
        }
    }

    bool chk = true;
    fore(i,1,n+1){
        if (find(i) != find(1)){
            chk = false;
            break;
        }
    }

    if (chk) cout << ans;
    else cout << "IMPOSSIBLE";
}