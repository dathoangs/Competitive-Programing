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
        ll n, m;
        cin >> n >> m;

        string s, ss;
        char c;

        cin >> s >> ss;

        bool chk = true; 

        if (ss[0] != ss[m-1]){
            chk = false;
        } else {
            fore (i,0,m-1){
                if (ss[i] == ss[i+1]){
                    chk = false;
                }
            }
        }


        c = ss[0];
        bool superchk = true;

        fore (i,0,n-1){
            if (s[i] == s[i+1]){
                if (s[i] == c || chk == false) {
                    superchk = false;
                    break;
                }
            }
        }

        KT:
            if (superchk) cout << yes;
            else cout << no;           
    }
}