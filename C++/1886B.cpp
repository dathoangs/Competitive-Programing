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

struct point {
    ll x;
    ll y;
};

double dist (point a, point b){
    return hypot(a.x - b.x, a.y - b.y);
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    ll t; cin >> t;
    while (t--){
        point p, a, b, o;

        cin >> p.x >> p.y >> a.x >> a.y >> b.x >> b.y;
        o.x = 0; o.y = 0;

        double ans;
        
        ans = min ({
            max(dist(a,p), dist(a,o)),
            max(dist(b,p), dist(b,o)),
            max({dist(a,p), dist(b,o), dist(a,b)/2}),
            max({dist(b,p), dist(a,o), dist(a,b)/2}),
        });

        cout << setprecision(10) << fixed << ans << nl;
    }
}