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
        ll n, total = 0;

        cin >> n;

        map <ll, ll> mp;

        ll a[n];

        fore (i,0,n){
            cin >> a[i];
            if (a[i] == 1) mp[1]++;
            else if (a[i] == 2) mp[2]++;
            else {
                mp[2] += a[i]-1;
            }
        }

        if (mp[1] > mp[2] || n==1) cout << no;
        else cout << yes;
    }
}