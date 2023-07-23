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
        ll n, q;
        cin >> n >> q;

        ll a[n], pre[n+1];

        fore(i,0,n){
            cin >> a[i];
        }

        sort (a, a+n, greater<ll>());

        pre[0] = 0;

        fore (i,1,n+1){
            pre[i] = pre[i-1] + a[i-1];
        }

        ll x, ans;
        fore (i,0,q){
            cin >> x;
            ans = -1;

            ll l = 0, r = n+1, m;

            while (r-l > 1){
                m = (l+r)/2;
                if (pre[m] >= x){
                    r = m;
                    ans = m;
                } else {
                    l = m;   
                }
            }            

            cout << ans << nl;
        }
    }
}