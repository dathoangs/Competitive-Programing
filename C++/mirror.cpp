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
    ll x, y;
};

double dist (point a, point b){
    return hypot(a.x - b.x, a.y - b.y);
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    point p1, p2, p3, p4;

    cin >> p1.x >> p1.y >> p2.x >> p2.y >> p3.x >> p3.y >> p4.x >> p4.y;

    double d1, d2, d3, d4;
    d1 = dist(p1, p2);
    d2 = dist(p2, p3);
    d3 = dist(p3, p4);
    d4 = dist(p4, p1);

    ll t, ans = 0;
    cin >> t;

    while (t--){
        point tmp1, tmp2, tmp3, tmp4;

        cin >> tmp1.x >> tmp1.y >> tmp2.x >> tmp2.y >> tmp3.x >> tmp3.y >> tmp4.x >> tmp4.y;

        double a1, a2, a3, a4;
        a1 = dist(tmp1, tmp2);
        a2 = dist(tmp2, tmp3);
        a3 = dist(tmp3, tmp4);
        a4 = dist(tmp4, tmp1);    

        if (d1 == a1 && d2 == a2 && d3 == a3 && d4 == a4) ans++;
        else if (d1 == a2 && d2 == a3 && d3 == a4 && d4 == a1) ans++;
        else if (d1 == a3 && d2 == a4 && d3 == a1 && d4 == a2) ans++;
        else if (d1 == a4 && d2 == a1 && d3 == a2 && d4 == a3) ans++;
    }

    cout << ans;
}