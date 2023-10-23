#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
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
        string s;
        cin >> s;

        char cur = 1;
        ll ans = 0;

        fore (i,0,4){
            if (s[i] == '0'){
                ans += abs(cur - 10);
                cur = 10;
            } else {
                ans += abs(cur - (s[i] - '0'));
                cur = s[i] - '0';
            }
        }

        cout << ans+4 << nl;
    }
}