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

ll n, m;

ll func(ll x, ll y){
    ll ans = 0;

    if (x == 1 || x == n){
        if (y == 1 || y == m) ans = 2;
        else ans = 3;
    } else if (y == 1 || y == m){
        if (x == 1 || x == n) ans = 2;
        else ans = 3;        
    } else {
        ans = 4;
    }

    return ans;
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    ll t; cin >> t;
    while (t--){
        ll x1, x2, y1, y2;
        cin >> n >> m;

        cin >> x1 >> y1 >> x2 >> y2;

        cout << min(func(x1, y1), func(x2, y2)) << nl;

    }
}