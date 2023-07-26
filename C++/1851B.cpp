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

        vector <ll> a(n), odd, even;
        
        fore (i,0,n){
            cin >> a[i];

            if (a[i] & 1){
                odd.pb(a[i]);
            } else {
                even.pb(a[i]);
            }
        } 

        sort (rall(even));
        sort (rall(odd));

        fore (i,0,n){
            if (a[i] & 1){
                a[i] = odd[odd.size()-1];
                odd.pop_back();
            } else {
                a[i] = even[even.size()-1];
                even.pop_back();                
            }
        }

        bool chk = true;
        fore (i,0,n-1){
            if (a[i] > a[i+1]){
                chk = false;
                break;
            }
        }

        if (chk) cout << yes;
        else cout << no;
    }
}