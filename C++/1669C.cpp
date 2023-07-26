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
        ll n, tmp, chk = true, first = 0, second = 0;

        cin >> n;

        cin >> tmp;
        if (tmp & 1) first = 1;
        else first = 2;

        cin >> tmp;
        if (tmp & 1) second = 1;
        else second = 2;        

        fore(i,2,n){
            cin >> tmp;

            if (i & 1){
                if (tmp & 1) {if (second == 2) chk = false;}
                else {if (second == 1) chk = false;}
            } else {
                if (tmp & 1) {if (first == 2) chk = false;}
                else {if (first == 1) chk = false;}                
            }
        }

        
        if (chk) cout << yes;
        else cout << no;

    }
}