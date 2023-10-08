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
        ll l, r, x, a, b, ans1 = 0, ans2 = 0;

        cin >> l >> r >> x >> a >> b;

        if (abs(a-b) == 0) cout << 0 << nl;
        else if (abs(a-b) >= x) cout << 1 << nl;
        else if ((abs(a-l) >= x && abs(b-l) >= x) || (abs(a-r) >= x && abs(b-r) >= x)) cout << 2 << nl;
        else if ((abs(a-l) >= x && abs(b-r) >= x) || (abs(a-r) >= x && abs(b-l) >= x)) cout << 3 << nl;
        else cout << -1 << nl;
    }
}