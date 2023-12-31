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
        ll n, c;

        cin >> n >> c;

        ll a[n];

        fore (i,0,n){
            cin >> a[i];
        }

        ll l = 1, r = 1000000000, m = (l+r)/2;
        while (l < r){
            ull res = 0;

            fore (i,0,n){
                res += (ull)(a[i]+2*m)*(a[i]+2*m);
                if (res > c) break;
            }

            if (res == c){
                cout << m << nl;
                break;
            } else if (res > c){
                r = m;
                m = (l+r)/2;
            } else {
                l = m+1;
                m = (l+r)/2;                
            }
        }
    }
}