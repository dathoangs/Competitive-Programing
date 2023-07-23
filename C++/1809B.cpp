// #pragma GCC optimize("O3,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
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

        //r = 1e9 thì không sao
        //nhưng r = n thì n to cỡ 975461057789971042 là toạch
        ll l = 0, r = n, m;

        while (r-l > 1){
            m = (l+r)/2;
            if (m*m >= n){
                r = m;
            } else {
                l = m;   
            }
            
        }

        cout << r-1 << nl;
    }
}