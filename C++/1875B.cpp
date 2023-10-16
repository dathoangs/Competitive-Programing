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

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    ll t; cin >> t;
    while (t--){
        ll n, m, k;

        cin >> n >> m >> k;

        ll a[n], b[m];

        fore (i,0,n) cin >> a[i];
        fore (i,0,m) cin >> b[i];
        

        sort(a, a+n);
        sort(b, b+m);

        ll minA = a[0], maxA = a[n-1];
        ll minB = b[0], maxB = b[m-1];

        if (minA >= maxB){
            if (!(k & 1)) a[n-1] = b[0]; 
        } else {
            if (maxB >= maxA){
                if (k & 1){
                    a[0] = b[m-1];
                } else {
                    if (minA > minB) a[0] = b[0];
                }
            } else {
                if (k & 1){
                    a[0] = b[m-1];
                } else {
                    if (minA > minB) {
                        a[0] = b[0];
                        a[n-1] = b[m-1];
                    }
                    else a[n-1] = b[m-1];
                }                
            }
        }
        
        ll ans = 0;
        fore (i,0,n) ans += a[i];
        cout << ans << nl;
    }
}