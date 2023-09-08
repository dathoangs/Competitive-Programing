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
        ll n, m;

        cin >> n;
        m = (n*(n-1))/2;

        ll a[m];

        fore (i,0,m) cin >> a[i];

        sort (a, a+m);

        for (int i = 0; i<m; i+= --n){
            cout << a[i] << " ";
        }

        cout << 1000000000 << nl;
    }
}