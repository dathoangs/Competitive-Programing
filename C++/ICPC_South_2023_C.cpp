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
        ll n, k, ans = 0;
        cin >> n >> k;

        map <pair<ll, ll>, bool> mpx, mpy, mpz;

        ll x, y, z;
        while (k--){
            cin >> x >> y >> z;
            ans += n;

            if (y == 0){
                if (mpy[{x, z}] == false){
                    
                }
            }
        }
    }
}