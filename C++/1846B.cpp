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
        char a[3][3];
        string ans = "DRAW";

        fore (i,0,3){
            fore(j,0,3){
                cin >> a[i][j];
            }
        }

        if ((a[0][0] == a[0][1] && a[0][0] == a[0][2] && a[0][0] != '.') || 
            (a[0][0] == a[1][0] && a[0][0] == a[2][0] && a[0][0] != '.')) ans = a[0][0];
        else if (a[1][0] == a[1][1] && a[1][0] == a[1][2] && a[1][0] != '.') ans = a[1][0];
        else if (a[2][0] == a[2][1] && a[2][0] == a[2][2] && a[2][0] != '.') ans = a[2][0];
        else if (a[0][1] == a[1][1] && a[0][1] == a[2][1] && a[0][1] != '.') ans = a[0][1];
        else if (a[0][2] == a[1][2] && a[0][2] == a[2][2] && a[0][2] != '.') ans = a[0][2];
        else if (a[0][0] == a[1][1] && a[0][0] == a[2][2] && a[0][0] != '.') ans = a[0][0];
        else if (a[0][2] == a[1][1] && a[0][2] == a[2][0] && a[0][2] != '.') ans = a[0][2];

        cout << ans << nl;        
    }
}