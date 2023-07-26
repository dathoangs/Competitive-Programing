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
        ll n, bigg = 0;
        cin >> n;

        bigg = (n*(n+1))/2;
        
        n = n-1;

        vector <ll> a(n), real;

        fore (i,0,n){
            cin >> a[i];
        }

        if (a[n-1] > bigg){
            cout << no;
            continue;
        }

        if (a[n-1] < bigg){
            a.pb(bigg);
        } else {
            map <ll, bool> mp;

            for (int i = n-1; i>0; i--){
                if (a[i] - a[i-1] > n){
                    
                }
            }            
        }


    }
}