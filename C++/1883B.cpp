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
        ll n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        if (n-k == 1) cout << yes;
        else {
            map <char, ll> mp;

            fore(i,0,s.length()){
                mp[s[i]]++;
            }

            for (auto &i:mp){
                if (k == 0) break;
                if (i.second & 1){
                    i.second--;
                    k--;
                }
            }

            int chk = 0;

            for (auto i:mp){
                if (i.second & 1){
                    chk++;
                }
                if (chk == 2) break;
            }

            // for (auto i:mp){
            //     cout << i.first << " " << i.second << nl;
            // }            

            if (chk == 2) cout << no;
            else cout << yes;
        }

    }
}