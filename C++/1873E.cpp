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
        ll n, x;
        cin >> n >> x;

        ll a[n];

        fore (i,0,n) cin >> a[i];

        ll l = 0, r = 2'000'000'007, m, tmp, ans = 0;

        while (l < r){
            m = (l+r+1) / 2;

            tmp = 0;
            fore (i,0,n){
                tmp += max(m - a[i], (ll)0);
            }

            if (tmp <= x) l = m;
            else r = m-1;
        }

        cout << l << nl;
    }
}