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
        string s[10];

        fore (i,0,10){
            cin >> s[i];
        }

        ll x, y, ans = 0;
        fore (i,0,10){
            fore (j,0,10){
                if (s[i][j] == 'X'){
                    x = i+1; y = j+1;
                    
                    if (x == 6) x = 5;
                    if (x == 7) x = 4;
                    if (x == 8) x = 3;
                    if (x == 9) x = 2;
                    if (x == 10) x = 1;

                    if (y == 6) y = 5;
                    if (y == 7) y = 4;
                    if (y == 8) y = 3;
                    if (y == 9) y = 2;
                    if (y == 10) y = 1;     

                    ans += min(x, y);               
                    
                }
            }
        }

        cout << ans << nl;
    }
}