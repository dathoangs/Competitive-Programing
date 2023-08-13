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
        ll n, mx1 = INT16_MIN, mx2 = INT16_MIN;

        cin >> n;

        ll a[n], tmp[n];

        fore (i,0,n){
            cin >> a[i];
            tmp[i] = a[i];
        }

        sort (tmp, tmp+n);

        mx1 = tmp[n-1];
        mx2 = tmp[n-2];

        fore (i,0,n){
            if (a[i] == mx1){
                cout << mx1 - mx2 << " ";
            } else {
                cout << a[i] - mx1<< " ";
            }
        }

        cout << nl;
    }
}