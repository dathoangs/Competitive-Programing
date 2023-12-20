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

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    ll t; cin >> t;
    while (t--){
        ll n, x;
        cin >> n >> x;

        ll a[n];
        vector <ll> ans;

        fore (i,0,n) cin >> a[i];

        fore (i,1,n){
            ans.pb(a[i] - a[i-1]);
        }

        ans.pb(a[0]);
        ans.pb((x - a[n-1])*2);

        sort (rall(ans));

        cout << ans[0] << nl;
    }
}