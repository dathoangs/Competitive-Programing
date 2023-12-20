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

bool chk (ll m, ll k, ll total, ll a[], ll n){
    if (m > a[0] || m*k > total) return false;
    
    ll times = k;
    fore (i,0,n){
        while (a[i] - k > 0) {
            a[i] -= m;
            times--;
            if (times == 0) break;
        }
        if (times == 0) break;
    }
    
    if (times == 0) return true;
    else return false;
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    ll n, k;
    cin >> n >> k;

    ll a[n], total = 0;

    fore (i,0,n){
        cin >> a[i];    
        total += a[i];
    } 

    sort (a, a+n);

    double l = 0, r = 10000000, m;
    fore (i,0,100){
        m = l + (r-l)/2;
        cout << l << " " << r << " " << m << nl;

        if (chk(m, k, total, a, n)){
            l = m;
        } else {
            r = m;
        }
    }

    cout << m;
}