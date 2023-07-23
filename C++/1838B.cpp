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
        ll n, pos1, pos2, posn, ans = 0, a, b;
        cin >> n;


        fore (i,0,n){
            cin >> a;

            if (a == 1) pos1 = i;
            if (a == 2) pos2 = i;
            if (a == n) posn = i;
        }

        if (abs(pos1 - pos2) == n-1){
            cout << 1 << " " << 1 << nl;
            continue;
        }

        a = min(pos1, pos2);
        b = max(pos1, pos2);

        if (posn < b && posn > a){
            cout << posn <<  " " << posn << nl;
        } else {
            if (posn > b){
                cout << b+1 <<  " " << n << nl;
            } else {
                cout << 1 <<  " " << a+1 << nl;
            }
        }
    }
}