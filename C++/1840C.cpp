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
        ll n, k, q, tmp, ans = 0;

        cin >> n >> k >> q;

        ll a[n];

        fore (i,0,n){
            cin >> a[i];
        }

        fore (i,0,n){
            if (a[i] > q) continue;

            fore (j,i,n){
                if (a[j] > q || j == n-1){
                    tmp = j-i;
                    
                    if (a[j] <= q) tmp++;
                    
                    if (tmp < k) break;

                    if (tmp == k) ans++;
                    else ans += (tmp - k + 1) * (tmp - k + 2) / 2;
                    
                    i = j;
                    break;
                }
            }
        }

        cout << ans << nl;
    }
}