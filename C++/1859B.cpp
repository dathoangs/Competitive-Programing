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

/*
======>> Sort pair 
======>> first - giảm dần 
======>> second - tăng dần
*/ 
bool cmp (pair <ll, ll> a, pair<ll, ll> b){
    if (a.first != b.first)
        return (a.first > b.first);
    else
       return (a.second < b.second);
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    ll t; cin >> t;

    while (t--){
        ll n, m, ans = 0, small = INT_MAX, tmp;
        cin >> n;

        vector <ll> a[n];
        pair <ll, ll> mn[n];

        fore (i,0,n){
            cin >> m;

            fore (j,0,m){
                cin >> tmp;
                a[i].pb(tmp);
            }
            sort (all(a[i]));

            mn[i] = {a[i][1], a[i][0]};
        }

        sort (mn, mn+n, cmp);

        fore (i,0,n){
            if (i != n-1) ans += mn[i].first;
            if (small > mn[i].second) small = mn[i].second;
        }

        ans += small;

        cout << ans << nl;
    }
}