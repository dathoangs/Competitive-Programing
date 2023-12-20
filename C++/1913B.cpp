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

        ll one = 0, zero = 0;
        fore(i,0,s.length()){
            if (s[i] == '0') zero++;
            else one++;
        }

        fore(i,0,s.length()){
            if (s[i] == '0'){
                if (one > 0) one--;
                else break;
            } else {
                if (zero > 0) zero--;
                else break;                
            }
        }

        if (one > zero) swap(one, zero);

        cout << zero << nl;
    }
}