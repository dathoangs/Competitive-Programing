#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
#define ll long long
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

ll vis[1005][1005];
ll a[1005][1005];
ll n, m;
ll dsu (ll i, ll j){
    ll res = 0;
    vis[i][j] = true;
    res += a[i][j];
    
    if (i+1 <  n && !vis[i+1][j] && a[i+1][j] > 0) res += dsu(i+1, j);
    if (i-1 >= 0 && !vis[i-1][j] && a[i-1][j] > 0) res += dsu(i-1, j);

    if (j+1 <  m && !vis[i][j+1] && a[i][j+1] > 0) res += dsu(i, j+1);
    if (j-1 >= 0 && !vis[i][j-1] && a[i][j-1] > 0) res += dsu(i, j-1);    
    
    return res;
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    ll t; cin >> t;
    while (t--){
        ll ans = 0;
        cin >> n >> m;
        
        fore (i,0,n){
            fore (j,0,m){
                cin >> a[i][j];
                vis[i][j] = false;
            }
        }

        fore (i,0,n){
            fore (j,0,m){
                if (a[i][j] > 0) ans = max(ans, dsu(i,j));
            }
        }  

        cout << ans << nl;      
    }
}