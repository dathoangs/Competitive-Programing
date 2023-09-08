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
        ll m, k, a1, ak, tmp = 0;

        cin >> m >> k >> a1 >> ak;

        ll f1 = 0, fk = 0;

        fk = m/k;
        f1 = m-fk*k;
        
        if (a1 >= f1){          
            a1 -= f1;
            f1 = 0;
        } else { 
            f1 -= a1;
            a1 = 0;
        }

        if (ak >= fk){  
            ak -= fk;
            fk = 0;
        } else {         
            fk -= ak;
            ak = 0;
        }        

        a1 /= k;

        if (fk >= a1){
            fk -= a1;
        } else {
            fk = 0;
        }

        cout << fk+f1 << nl;
    }
}