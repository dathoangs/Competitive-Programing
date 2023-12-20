// #pragma GCC optimize("O3,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
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

    double n, ans = 0;
    cin >> n;

    if (n == 1){
        cout << 1;
    } else {
        double l = 0, r = 1e9, m;
        fore (i,0,80){
            m = (l+r)/2;
            
            ans = m;
            double cond = m*m + pow(m, 0.5);
            // cout << l << " " << r << " " << cond << nl;

            if (cond == n){
                break;
            } else if (cond > n){
                r = m;
            } else {
                l = m;
            }   
            
        }

        cout << setprecision(15) << fixed << ans;
    }
}