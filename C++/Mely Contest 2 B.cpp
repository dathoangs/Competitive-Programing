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
        ll n, ans = 0;
        cin >> n;

        ll a[n], b[n];

        fore (i,0,n) cin >> a[i];
        fore (i,0,n) cin >> b[i];

        vector <ll> kame, galic;

        fore (i,0,n){
            if (a[i] == 0) kame.pb(b[i]);
            else galic.pb(b[i]);
        }
        
        sort(all(kame));
        sort(all(galic));

        

        while (kame.size() != 0 && galic.size() != 0){
            ans += kame.back() *2 + galic.back() *2;
            kame.pop_back();
            galic.pop_back();
        }

        if (galic.size() != 0){
            ans += galic.back() *2;
            galic.pop_back();

            while (galic.size() != 0){
                ans += galic.back();
                galic.pop_back();
            }         
        }

        if (kame.size() != 0){
            ans += kame.back() *2;
            kame.pop_back();

            while (kame.size() != 0){
                ans += kame.back();
                kame.pop_back();
            }         
        }     

        cout << ans << nl;   
    }
}