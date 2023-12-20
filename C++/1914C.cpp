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
        ll n, k;
        cin >> n >> k;

        ll a[n], b[n];

        fore (i,0,n) cin >> a[i];
        fore (i,0,n) cin >> b[i];

        vector <ll> ans;

        ll MAXb = b[0], res = 0;
        fore (i,0,n){
            if (i+1 > k) break;
            res += a[i];
            if (MAXb < b[i]) MAXb = b[i];
            ans.pb(res + MAXb*(k-i-1));
        }

        sort(rall(ans));
        //fore (i,0,ans.size()) cout << ans[i] << " ";
        cout << ans[0] << nl;
    }
}