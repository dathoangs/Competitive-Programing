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

        vector <ll> a, b;

        fore(i,0,n) {
            cin >> tmp;

            if (tmp > 0) a.pb(tmp);
            else b.pb(tmp);
        }

        sort (all(a));
        sort (rall(b));

        tmp = 0;

        fore (i,0,a.size()){
            tmp++;
            cout << tmp << " ";
        }

        fore (i,0,b.size()){
            tmp--;
            cout << tmp << " ";
        } 

        cout << nl;

        ll c = 0;
        tmp = 0;

        fore (i,0,b.size()){
            cout << 1 << " " << 0 << " ";
        }
        tmp = 0;
        fore (i,b.size(),a.size()){
            tmp++;
            cout << tmp << " ";
        }
        

        cout << nl;
    }
}