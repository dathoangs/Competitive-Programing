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

        ll a1 = 2, a2 = 4, a3;

        cout << 2 << " " << 4 << " ";

        fore (i,0,n-2){
            if (3*(a2+1) % (a1+a2) == 0){
                a3 = a2+2;
            } else a3 = a2+1;

            cout << a3 << " ";
            a1 = a2;
            a2 = a3;
        }

        cout << nl;
    }
}