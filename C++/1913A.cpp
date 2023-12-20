#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
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

        string s1 = "", s2 = "";
        
        ll pos = 0;
        s1 += s[0];
        // cout << s1 << nl;
        fore (i,1,s.length()){
            pos = i;
            if (s[i] == '0') s1 = s1 + s[i];
            else break;
        }

        for(int i = pos; i<s.length(); i++){
            s2 += s[i];
        } 
        // cout << s1 << " " << s2 << nl;
        if (stoi(s2) > stoi(s1)) cout << s1 << " " << s2 << nl;
        else cout << -1 << nl;
        // cout << nl;
    }
}