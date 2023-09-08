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
        ll n, m;
        cin >> n >> m;

        string s[n];

        fore (i,0,n){
            cin >> s[i];
        }

        bool chkv = false, chki = false, chkk = false, chka = false;
        fore(i,0,m){
            fore(j,0,n){
                if (!chkv && s[j][i] == 'v') {
                    chkv = true;
                    break;
                }

                if (!chki && s[j][i] == 'i' && chkv) {
                    chki = true;
                    break;
                }

                if (!chkk && s[j][i] == 'k' && chki) {
                    chkk = true;
                    break;
                }

                if (!chka && s[j][i] == 'a' && chkk) {
                    chka = true;
                    break;
                }                
            }

            if (chka) break;
        }

        if (chkv && chki && chkk && chka) cout << yes;
        else cout << no;
    }
}