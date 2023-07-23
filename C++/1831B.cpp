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
        ll n, l = 0, r = 0, ans = INT_MIN;
        cin >> n;
        map <ll, vector<ll>> mp1, mp2;
        // n *= 2;

        ll a[n], b[n];

        fore(i,0,n){
            cin >> a[i];
        }
        fore(i,0,n){
            cin >> b[i];
        }   

        if (n == 1){
            if (a[0] == b[0]){
                cout << 2 << nl;
            } else {
                cout << 1 << nl;
            }
        } else {
            fore(i,0,n){
                if (a[r] != a[l]){
                    l = r;
                    mp1[a[r-1]].pb(ans);
                    ans = 1;
                }

                if (i == n-1){
                    mp1[a[r]].pb(ans);
                }
                
                ans = max(ans, r-l+1);
                if (i == n-1){
                    mp1[a[r]].pb(ans);
                }                

                r++;
            }

            r = 0; l = 0, ans = 1;
            fore(i,0,n){
                if (b[r] != b[l]){
                    l = r;
                    mp2[b[r-1]].pb(ans);
                    ans = 1;
                }

                ans = max(ans, r-l+1);
                if (i == n-1){
                    mp2[b[r]].pb(ans);
                }    

                r++;
            }  

            ans = 0;
            for (auto i:mp1){
                sort(rall(i.second));
                sort(rall(mp2[i.first]));

                mp2[i.first].pb(0);
                // cout << i.first << "-" << i.second[0] << "-" << mp2[i.first][0] << nl;
                ans = max(i.second[0] + mp2[i.first][0], ans);
            } 

            for (auto i:mp2){
                sort(rall(i.second));
                sort(rall(mp1[i.first]));

                mp1[i.first].pb(0);
                // cout << i.first << "-" << i.second[0] << "-" << mp2[i.first][0] << nl;
                ans = max(i.second[0] + mp1[i.first][0], ans);
            }              
                         
            cout << ans << nl;
        } 
    }
}