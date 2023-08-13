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

bool cmp (tuple <ll, ll, ll> a, tuple <ll, ll, ll> b){
    if (get<0>(a) != get<0>(b))
        return (get<0>(a) > get<0>(b));
    else if (get<1>(a) != get<1>(b))
       return (get<1>(a) < get<1>(b));
    else
        return (get<2>(a) < get<2>(b));
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    ll t; cin >> t;

    while (t--){
        ll n, m , h;
        cin >> n >> m >> h;

        ll a[n][m];

        fore (i,0,n){
            fore (j,0,m){
                cin >> a[i][j];
            }
        }
        
        vector <tuple<ll, ll, ll>> v;

        fore (i,0,n){
            sort (a[i], a[i]+m);
            
            ll pen = 0, score = 0, time = 0;
            fore (j,0,m){
                if (time + a[i][j] <= h){
                    
                    pen += (a[i][j] + time);
                    time += a[i][j];
                    score++;
                    
                    // cout << a[i][j] << " " << pen << nl;
                } else {
                    break;
                }
            }
            v.pb({score, pen, i});
        }
            
        sort (v.begin(), v.end(), cmp);

        fore(i,0,v.size()){
            if (get<2>(v[i]) == 0){
                cout << i+1 << nl;
                break;
            }
        }

        // fore(i,0,v.size()){
        //     cout << get<0>(v[i]) << " " << get<1>(v[i]) << " " << get<2>(v[i]) << nl;
        // }        
    }
}