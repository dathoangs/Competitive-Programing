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
        string s;

        cin >> s;

        if (s[0] != 'a'){
            if (s[0] == 'b'){
                swap(s[0], s[1]);
            } else {
                swap(s[0], s[2]);
            }
            goto check;
        }

        if (s[1] != 'b'){
            if (s[1] == 'a'){
                swap(s[0], s[1]);
            } else {
                swap(s[1], s[2]);
            }
            goto check;
        }        
    
        if (s[2] != 'c'){
            if (s[2] == 'a'){
                swap(s[0], s[2]);
            } else {
                swap(s[1], s[2]);
            }
            goto check;
        }

        check:
            if (s == "abc") cout << yes;
            else cout << no;

    }
}