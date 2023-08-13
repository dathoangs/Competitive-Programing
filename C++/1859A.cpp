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
        ll n, mx = 0;
        cin >> n;

        ll a[n];
        vector <ll> b, c;

        fore (i,0,n){
            cin >> a[i];
            if (a[i] > mx){
                mx = a[i];
            }
        }

        fore (i,0,n){
            if (a[i] != mx){
                b.pb(a[i]);
            }
        }

        if (b.size() == 0){
            cout << -1 << nl;
            continue;
        }

        fore (i,0,n){
            if (a[i] == mx){
                c.pb(a[i]);
            }
        }

        cout << b.size() << " " << c.size() << nl;
        fore (i,0,b.size()){
            cout << b[i] << " ";
        }
        cout << nl;

        fore (i,0,c.size()){
            cout << c[i] << " ";
        }
        cout << nl;
    }
}