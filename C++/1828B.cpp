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
        ll n;
        cin >> n;

        ll ans, tmp;

        map <ll,ll> mp;

        fore (i,0,n){
            cin >> tmp;
            mp[abs(tmp-i-1)] = 1;
        }

        ans = mp.begin()->first;

        for(auto i:mp){
            if (i.first == mp.begin()->first) continue;

            ans = __gcd(ans, i.first);
        }

        cout << ans << nl;
   }
}