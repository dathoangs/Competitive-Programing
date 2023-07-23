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
        ll a, b, c, d, tmp1, tmp2;

        cin >> a >> b >> c >> d;

        if (a-b < c-d || d < b){
            cout << -1 << nl;
        } else {
            if (d == b){
                cout << abs(c-a) << nl;
            } else {
                tmp1 = abs(d-b);
                tmp2 = a - (c - tmp1);

                cout << tmp2 + tmp1 << nl;
            }
        }
    }
}