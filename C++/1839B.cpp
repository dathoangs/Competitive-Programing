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

bool cmp (pair <ll, ll> a, pair<ll, ll> b){
    if (a.first != b.first)
        return (a.first < b.first);
    else
       return (a.second > b.second);
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    ll t; cin >> t;
    while (t--){
        ll n, b, c, ans = 0;
        cin >> n;

        pair <ll, ll> a[n];

        fore (i,0,n){
            cin >> b >> c;
            a[i] = {b, c};
        }

        sort (a, a+n, cmp);

        queue <ll> q;

        fore (i,0,n){
            // cout << a[i].first << " " <<  a[i].second << nl;
            if (a[i].first > q.size()){
                ans += a[i].second;
                q.push(a[i].first);
            }

            ll j = i;
            while (a[j].first <= q.size() && j < n){
                j++;
            }

            if (a[i] != a[j]){
                j--;
            }

            i = j;

            // if (a[i].first > q.size()){
            //     ans += a[i].second;
            //     q.push(a[i].first);
            // }            

            while (q.front() <= q.size()){
                q.pop();
            }

        }

        cout << ans << nl;
    }
}