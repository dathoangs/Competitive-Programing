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

    ll n, k;

    cin >> n >> k;

    ll a[n], q;

    fore (i,0,n) cin >> a[i];
    sort (a, a+n);

    fore (i,0,k){
        cin >> q;
        if (q < a[0]){
            cout << 0 << nl;
            continue;
        }
        
        ll ans = 0;
        ll l = 0, r = n, m;

        while (l <= r){
            // cout << l << " " << r << nl;
            m = l + (r-l)/2;

            if (a[m] <= q){
                ans = m;
                l = m+1;
            } else {
                r = m-1;
            }
        }
        
        if (ans < n) ans++;

        cout << ans << nl;
    }
}