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

    ll n, x;
    cin >> n >> x;

    ll a[n];

    fore (i,0,n){
        cin >> a[i];
    }

    sort (a, a+n);

    bool chk = true;
    ll ans = 0;
    fore (i,0,n){
        if ((a[n-1] - a[i]) % x != 0){
            chk = false;
            break;
        } else {
            ans += (a[n-1] - a[i]) / x;
        }
    }

    if (chk) cout << ans;
    else cout << -1;
}