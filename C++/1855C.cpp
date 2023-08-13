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

        ll a[n];
        pair <ll, ll> mx, mn;
        vector <pair<ll, ll>> ans;
        
        mx.first = INT16_MIN;

        fore (i,0,n){
            cin >> a[i];
            if (a[i] > mx.first){
                mx.first = a[i];
                mx.second = i;
            }          
        }

        if (mx.first <= 0){
            for(int i = n-1; i>0; i--){
                a[i-1] += a[i];
                ans.pb({i-1, i});
            }
        } else {
            while (mx.first < 20){
                a[mx.second] *= 2;
                mx.first = a[mx.second];
                ans.pb({mx.second, mx.second});
            }
            
            ll pos = mx.second;

            fore (i,1,n){
                a[i] += 2*a[pos];
                ans.pb({i, pos});
                ans.pb({i, pos});
                pos = i;
            }

        }

        cout << ans.size() << nl;

        fore (i,0,ans.size()){
            cout << ans[i].first+1 << " " << ans[i].second+1 << nl;
        }


    }
}