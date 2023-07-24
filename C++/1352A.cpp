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
        ll n, cur = 1;

        cin >> n;

        vector <ll> a;

        while (n != 0){
            if (n % 10 != 0){
                a.pb(n%10 * cur);
            }
            n/=10;
            cur *=10;
        }

        cout << a.size() << nl;
        fore (i,0,a.size()){
            cout << a[i] << " ";
        }

        cout << nl;
    }
}