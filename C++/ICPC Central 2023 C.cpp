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
    ll ans = 0;

    while (t--){
        ll n;
        cin >> n;

        ll a[n];

        fore (i,0,n){
            cin >> a[i];
            ans += a[i];
        }

        sort (a, a+n);

        map <ll, ll> mp1, mp2;

        fore (i,0,n-1){
            if (a[i+1] == a[i]){
                mp1[a[i]]++;
                i++;
            } else {
                fore (j,i+1,n){
                    if (a[j] % a[i] == 0) mp1[a[i]]++;
                    else mp2[a[i]]++;
                }
            }
        }

        for (auto i:mp1){
            ans += (((i.second * (i.second+1)) / 2) * i.first) % 1000000007; 
            ans %= 1000000007;
        }
        for (auto i:mp2){
            ans += (((i.second * (i.second+1)) / 2)) % 1000000007; 
            ans %= 1000000007;
        }

        cout << ans << nl;
    }
}