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

ll p[100005];

ll find(ll u){
    if (u == p[u]) return u;
    return p[u] = find(p[u]);
}

bool merge(ll a, ll b){
    ll ra = find(a);
    ll rb = find(b);
    if (ra == rb) return false;

    p[rb] = ra; 
    return true;
}


int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    ll n, m;
    cin >> n >> m;
    
    fore (i,1,n+1){
        p[i] = i;
    }

    ll a, b;
    fore (i,0,m){
        cin >> a >> b;
        merge(a, b);
    }

    vector <pair<ll, ll>> ans;
    fore (i,1,n+1){
        if(merge(1, i)){
            ans.pb({1, i});
        }
    }

    cout << ans.size() << nl;

    fore (i,0,ans.size()){
        cout << ans[i].first << " " << ans[i].second << nl;
    }
}