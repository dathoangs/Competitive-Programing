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
        ll n, k, cake;
        cin >> n >> k;

        if (k >= 30){
            cout << n+1 << nl; 
            continue;
        }

        cake = pow(2, k-1);

        if (n > cake){
            if (k == 1){
                cout << 2 << nl;
            } else {
                if (n < pow(2, k)){
                    cout << n+1 << nl;
                } else {
                    cout << (ull)pow(2, k) << nl;
                }
            }
        } else {
            cout << n+1 << nl;
        }
    }
}