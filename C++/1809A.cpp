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

        map <char, ll> mp;

        fore (i,0,4){
            mp[s[i]]++;
        }

        switch (mp.size()){
            case 1: cout << -1 << nl; break;
            
            case 2: {
                for (auto i: mp){
                    if (i.second == 2){
                        cout << 4 << nl;
                    } else {
                        cout << 6 << nl;
                    }
                    break;
                }
                break;
            }

            default: cout << 4 << nl; break;
        }



        
    }
}