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
        ll n, s, r;
        cin >> n >> s >> r;

        ll a[n];

        double ss = r;
        fore(i,0,n-1){
            a[i] = ceil(ss/(n-i-1));
            ss -= a[i];
        }

        a[n-1] = s-r;

        fore (i,0,n){
            cout << a[i] << " ";
        }
        cout << nl;
    }
}