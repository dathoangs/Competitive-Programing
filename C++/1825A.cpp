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
        ll ans = 0;

        cin >> s;

        fore (i,0,s.length()){
            fore (j,i+1,s.length()){
                string tmp1 = s.substr(i, j-i+1), tmp2 = tmp1;
                reverse(tmp2.begin(), tmp2.end());
                if (tmp1 != tmp2){
                    ans = max(ans, (ll)tmp1.length());
                }
            }
        }

        if (ans == 0){
            cout << -1 << nl;
        } else {
            cout << ans << nl;
        }
    }
}