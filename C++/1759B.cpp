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
        ll m, s, pre = 0, total, tmp, mx = INT_MIN;

        cin >> m >> s;

        fore (i,0,m){
            cin >> tmp;
            pre += tmp;
            mx = max(tmp, mx);
        }

        total = (mx + mx*mx)/2;

        s -= total - pre;

        while (s > 0){
            mx++;
            s -= mx;
        }

        if (s == 0){
            cout << yes;
        } else cout << no;

        
    }
}