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
        ll n, a, b, ans = 0, sz = 0;
        cin >> n;

        vector <vector<ll>> v;

        v.pb({1});

        fore (i,0,n-1){
            cin >> a >> b;
            sz = v.size();

            for (int j = 0; j<sz; j++){
                if (binary_search(all(v[j]), a)){
                    v[j].pb(b);
                    break;
                } else if (binary_search(all(v[j]), b)){
                    v[j].pb(a);
                    break;
                } 

                if (j == sz-1){
                    v.pb({a, b});
                    break;
                }
            }

            for (auto vv: v){
                fore (i,0,vv.size()){
                    cout << vv[i] << " ";
                }
                cout << nl;
            }
            cout << nl;
            
        }   

        cout << v.size() << nl;
        

    }
}