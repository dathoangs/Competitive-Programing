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

    ll n;
    cin >> n;

    char q;
    ll x, y;
    multiset <pair<ll, ll>> s;

    fore (i,0,n){
        cin >> q >> x >> y;

        if (q == '+') s.insert({x, y});
        else s.erase(s.find({x, y}));

        if (s.size() <= 1) cout << no;
        else {
            bool chk = false;
            auto j = --s.end();
           
            
            L1:{
                if (chk) cout << yes;
                else cout << no;
            }
        }
    }
    
}