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

        ll a[n], ans = 0;
        vector <pair<ll,ll>> vp;
        map <ll, ll> mp, mp1;

        fore (i,0,n){
            cin >> a[i];
            mp[a[i]]++;
            if (a[i] < 0){
                ans = a[i];
            }
        }

        fore (i,0,n-1){
            fore(j,i+1,n){
                if (mp[abs(a[i] - a[j])]){
                    if (a[i] == abs(a[i] - a[j]) && mp[a[i]] > 1){
                        vp.pb({a[i], a[j]});
                        mp1[a[i]]++;
                        mp1[a[j]]++;                            
                    } else if (a[j] == abs(a[i] - a[j]) && mp[a[j]] > 1){
                        vp.pb({a[i], a[j]});
                        mp1[a[i]]++;
                        mp1[a[j]]++;                                                   
                    } else {
                        vp.pb({a[i], a[j]});
                        mp1[a[i]]++;
                        mp1[a[j]]++;                        
                    }
                }
            }
        }
        
        if (ans != 0){
            cout << ans << nl;
            continue;
        }

        ll tmp = 0;
        for (auto i:mp1){
            if (tmp < i.second){
                ans = i.first;
            }
        }

        cout << ans << nl;
    }
}