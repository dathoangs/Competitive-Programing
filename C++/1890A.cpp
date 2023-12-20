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
        ll n;
        cin >> n;

        ll a[n];

        fore (i,0,n) cin >> a[i];

        if (n == 2) cout << yes;
        else {
            sort(a, a+n);

            ll p1 = 0, p2 = n-1, k = a[p1]+a[p2];
            bool chk = true, chk1 = true;

            while (p1 < p2){
                p1++;
                if (p1 == p2) break;
                if (k != a[p1]+a[p2]){
                    chk = false;
                    break;
                }
                // cout << k << " " << p1 << " " << p2 << nl;

                p2--;
                if (p1 == p2) break;
                if (k != a[p1]+a[p2]){
                    chk = false;
                    break;
                }    
                // cout << p1 << " " << p2 << nl;
            }

            if (chk == false){
                p1 = 0, p2 = n-1;
                while (p1 < p2){
                    p2--;
                    if (p1 == p2) break;
                    if (k != a[p1]+a[p2]){
                        chk1 = false;
                        break;
                    }
                    // cout << k << " " << p1 << " " << p2 << nl;

                    p1++;
                    if (p1 == p2) break;
                    if (k != a[p1]+a[p2]){
                        chk1 = false;
                        break;
                    }    
                    // cout << p1 << " " << p2 << nl;
                }
            }

            if (chk || chk1) cout << yes;
            else cout << no;
        }
    }
}