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
        ll n, k;
        cin >> n >> k;

        vector <ll> a(n), b(n), tmp(n);

        fore (i,0,n){
            cin >> a[i];
        }

        fore (i,0,n){
            cin >> b[i];
        }       

        tmp = a;
        sort(all(a));
        sort(all(b));

        map <ll, vector<ll>> mp;

        fore(i,0,n){
            mp[a[i]].pb(b[i]);
        }

        fore (i,0,n){
            cout << mp[tmp[i]][mp[tmp[i]].size()-1] << " ";
            mp[tmp[i]].pop_back();
        }

        cout << nl;
        
    }
}