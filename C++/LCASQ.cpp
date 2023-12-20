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

ll h[10000];
vector <ll> g[10000];

void dfs(ll u){
    
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    ll n, m, tmp;
    cin >> n;

    fore (i,0,n){
        cin >> m;
        fore (j,0,m){
            cin >> tmp;
            g[i].pb(tmp);
        }
    }

    ll q, u, v;
    cin >> q;

    fore (i,0,q){
        cin >> u >> v;


    }
}