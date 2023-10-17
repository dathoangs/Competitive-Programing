#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
typedef long long ll;
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fore(i,b,a) for(int i = b; i<a; i++)
#define null NULL
#define nl '\n'
#define yes "YES\n"
#define no "NO\n"
using namespace std;

ll p[100007], sz[100007];

ll find (ll u){
    if (u == p[u]) return u;
    else return p[u] = find(p[u]);
}

void merge(ll a, ll b){
    ll ra = find(a);
    ll rb = find(b);

    if (ra != rb){
        if (sz[ra] >= sz[rb]){
            p[rb] = ra;            
        } else {
            p[ra] = rb;  
        }
    }
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
    ll a, b;
    fore (i,0,m){
        cin >> s >> a >> b;

        if (s == "union"){
            merge(a, b);
        } else {
            if (find(a) == find(b)) cout << yes;
            else cout << no;
        }
    }

}