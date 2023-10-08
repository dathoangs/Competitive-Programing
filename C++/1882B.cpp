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

        vector<vector<ll>> a(n);
        map <ll, ll> chk, tmp;
        vector <ll> ans;

        ll k;
        fore (i,0,n){
            cin >> k;
            a[i].resize(k);

            fore (j,0,k){
                cin >> a[i][j];
                chk[a[i][j]]++;
            }
        }

        ll count = 0;
        fore (i,0,n){
            tmp = chk;
            count = 0;

            fore (j,0,a[i].size()){
                tmp[a[i][j]]--;
                
                if (tmp[a[i][j]] == 0) count++;
            }

            if (count != 0) ans.pb(count);
        }

        sort(all(ans));
        
        cout << chk.size() - ans[0] << nl;
    }
}