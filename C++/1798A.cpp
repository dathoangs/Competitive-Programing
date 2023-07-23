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
        ll n, am = INT16_MIN, bm = INT16_MIN;
        cin >> n;

        ll a[n], b[n];

        fore (i,0,n){
            cin >> a[i];
        }

        fore (i,0,n){
            cin >> b[i]; 
        } 
        
        bool chk = true;
        fore (i,0,n){
            if (a[i] > a[n-1] || b[i] > b[n-1]){
                swap(a[i], b[i]);
                if (a[i] > a[n-1] || b[i] > b[n-1]) {
                    chk = false;
                    break;
                }
            } 
        }

        if (chk) cout << yes;
        else cout << no;


    }
}