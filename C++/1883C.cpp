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
        ll n, k;

        cin >> n >> k;

        ll a[n], ans = INT_MAX;

        fore (i,0,n){
            cin >> a[i];
        }

        fore (i,0,n){ 
            if (a[i]%k == 0){
                ans = 0;
                break;
            }

            ans = min(ans, k - (a[i]%k));

            
        }

        cout << ans << nl;
    }
}