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
        
        if (n-3 == 2 || n-3 == 1 || n-3 == 3 || n-3 == 6 || n <= 3) cout << no;
        else {
            if ((n-3) % 3 != 0){
                cout << yes;
                cout << 1 << " " << 2 << " " << n-3 << nl;
            } else {
                cout << yes;
                cout << 1 << " " << 4 << " " << n-5 << nl;
            }           
        }

    }
}