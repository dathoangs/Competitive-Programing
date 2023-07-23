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
        ll n, am = 0, dg = 0, ans = 0;
        cin >> n;

        ll a[n];

        fore (i,0,n){
            cin >> a[i];
            if (a[i] == -1) am++;
            else dg++;
        }

        if (am > dg){
            ll tmp = n/2;
            
            ans+= am - tmp;
            dg += am - tmp;
            am = tmp;

            // cout << tmp << " " << am << " " << dg << nl;
        } 

        if (am & 1){
            ans++;
        }
        

        cout << ans << nl;
    }
}