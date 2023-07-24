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

        if ((n - (k-1)) & 1 && (n - (k-1)) > 0){
            cout << yes;
            cout << n - (k-1) << " ";
            fore (i,0,k-1){
                cout << 1 << " ";
            }
            cout << nl;
        } else if ((n - 2*(k-1)) % 2 == 0 && (n - 2*(k-1)) > 0){
            cout << yes;
            cout << n - 2*(k-1) << " ";
            fore (i,0,k-1){
                cout << 2 << " ";
            }   
            cout << nl;         
        } else cout << no;


    }
}