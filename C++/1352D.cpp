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
        bool chk = true;
        ll n, a = 0, b = 0, ans = 0, cur = 0, pre = 0;
        cin >> n;

        vector <ll> v(n);

        fore (i,0,n) cin >> v[i];

        while (v.size() > cur){
            if (chk){
                ll tmp = 0;
                while (tmp <= pre && cur < v.size()){
                    a += v[cur];
                    tmp += v[cur];
                    cur++;
                }
                pre = tmp;
                chk = false;
            } else {
                ll tmp = 0;
                while (tmp <= pre && v.size() > cur){
                    b += v[v.size()-1];
                    tmp += v[v.size()-1];
                    v.pop_back();
                }
                pre = tmp;
                chk = true;
            }
            ans++;
        }

        cout << ans << " " << a << " " << b << nl;
    }
}