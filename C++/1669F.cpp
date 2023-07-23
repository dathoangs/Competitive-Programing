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
        ll n;
        cin >> n;

        ll a[n];

        fore (i,0,n){
            cin >> a[i];
        }
        
        ll p1 = 0, p2 = n-1, ans = 0, sum1=a[p1], sum2=a[p2];

        while (p1 < p2){
            if (sum1 == sum2){
                ans = p1+1 + (n-p2);
                p1++;
                sum1 += a[p1];
            } else if (sum1 > sum2){
                p2--;
                sum2 += a[p2];
            } else {
                p1++;
                sum1 += a[p1];
            }
        }

        cout << ans << nl;
    }
}