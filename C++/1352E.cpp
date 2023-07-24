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
        ll n, ans = 0;
        cin >> n;

        ll a[n], pre[n+1];
        pre[0] = 0;

        fore (i,0,n){
            cin >> a[i];
            pre[i+1] = pre[i] + a[i];
        }

        fore (i,0,n){
            ll l = 0, r = 0;
            
            while (r <= n){
                if (r-l == 1){ 
                    r++;
                    continue;
                }

                if (pre[r] - pre[l] == a[i]){
                    ans++;
                    // cout << a[i] << "-" << l << "-" << r << nl;
                    break;
                } else if (pre[r] - pre[l] > a[i]){
                    l++;
                } else {
                    r++;
                }
            }            
        }

        cout << ans << nl;
    }
}