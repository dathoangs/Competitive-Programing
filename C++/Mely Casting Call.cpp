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
        ll n, tmp;
        cin >> n;

        vector <ll> odd, even;
        bool chk = true;

        fore (i,0,n){
            cin >> tmp;

            if (tmp & 1) odd.pb(i+1);
            else even.pb(i+1);

            if (chk && odd.size() == 3) {
                chk = false;
                cout << yes;
                fore (i,0,3){
                    cout << odd[i] << " ";
                }
                cout << nl;
            }

            if (chk && even.size() >= 2 && odd.size() >= 1){
                chk = false;
                cout << yes;
                cout << even[0] << " " << even[1] << " " << odd[0] << nl;
            }
        }

        if (chk) cout << no;
    }
}