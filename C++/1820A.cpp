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
        string s;
        cin >> s;
        ll ans = 0;

        if (s[0] == '_') ans++;
        if (s[s.length()-1] == '_') ans++;
        if (s.length() == 1 && s[0] == '^') ans++;

        fore (i,0,s.length()-1){
            if (s[i] == s[i+1] && s[i] == '_'){
                ans++;
            }
        }

        cout << ans << nl;
    }
}