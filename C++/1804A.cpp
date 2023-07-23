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
        ll a, b, ans = 0;
        cin >> a >> b;

        a = abs(a);
        b = abs(b);
        if (a > b) swap(a, b);

        if (a == 0){
            ans += 2*b - 1;
        } else {
            ans += a*2 - 1;

            if (b == a) ans++;

            if (b > a) ans += (b-a)*2;

        }

        cout << ans << nl;
    }
}