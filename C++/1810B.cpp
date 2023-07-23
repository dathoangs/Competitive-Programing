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
        vector <int> ans;

        if(n&1){
            while (n > 1){
                if (n/2 & 1){
                    ans.pb(2);
                    n = n/2;
                } else {
                    ans.pb(1);
                    n = n/2 + 1;
                }
            }
        } else {
            cout << -1 << nl;
            continue;
        }

        if (ans.size() > 40){
            cout << -1 << nl;
        } else {
            reverse(all(ans));
            cout << ans.size() << nl;
            for (auto i: ans){
                cout << i << " ";
            }
            cout << nl;
        }
        

    }
}