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
        ll n, k, ans;
        cin >> n >> k;
        ans = n;

        string s[n];

        fore (i,0,n){
            cin >> s[i];
        }

        if (n == 1){
            cout << 1 << nl;
            continue;
        }

        map <ll, bool> mp;

        fore (i,0,k){
            fore (j,1,n){
                // cout << s[j][i] << " ";
                if (s[j][i] != s[0][i] && !mp[j]){
                    ans--;
                    mp[j] = true;
                }
            }
            // cout << nl;
        }

        cout << ans << nl;

    }
}