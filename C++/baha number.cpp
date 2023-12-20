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

        ll a[n], b[n];

        fore (i,0,n){
            cin >> a[i];
        }

        fore (i,0,n){
            cin >> b[i];
        }

        ll p1 = 0, p2, ans = 0;

        while (p1 < n-1){
            p2 = p1;

            while (b[p2+1] >= a[p1]){
                p2++;
                if (p2 == n-1) break;
            }

            // cout << p1 << "-" << p2 << nl;

            ans = max(ans, p2-p1);
            p1++;
        }

        cout << ans << nl;
    }
}