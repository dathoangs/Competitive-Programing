#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
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

ll p[200005], sz[200005], sum[200005];
bool chk[200005];

ll nenTong (ll a){
    if (a == p[a] || p[p[a]] == p[a]) return sum[a];
    return sum[a] -= nenTong(p[a]);
}

ll find (ll a){
    if (a == p[a]) return a;
    nenTong(a);
    return p[a] = find(p[a]);
}

void merge(ll a, ll b){
    ll ra = find(a);
    ll rb = find(b);

    if (ra != rb){
        if (sz[a] >= sz[b]){
            sum[rb] -= sum[ra];
            p[rb] = ra;
            sz[ra] += sz[rb];
        } else {
            sum[ra] -= sum[rb];
            p[ra] = rb;
            sz[rb] += sz[ra];
        }
    }
}

ll get(ll a, ll ans){
    if (a == p[a]) return ans += sum[a];
    ans += sum[a];
    return get(p[a], ans);
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    ll n, m;

    cin >> n >> m;

    fore (i,0,n+1){
        p[i] = i;
        sz[i] = 1;
    }

    string s;
    ll a, b, tmp, ra;
    fore (i,0,m){
        cin >> s;
        if (s == "add"){
            cin >> a >> b;

            ra = find(a);
            sum[ra] += b;
        } else if (s == "get"){
            cin >> a;
            ll ans = 0;
            cout << get(a, ans) << nl;
        } else {
            cin >> a >> b;

            merge(a, b);
        }
    }
    cout << sum[1] << sum[2] << sum[3];
}