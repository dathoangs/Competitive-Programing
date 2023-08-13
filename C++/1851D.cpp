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
        ll n, bigg = 0;
        cin >> n;

        bigg = (n*(n+1))/2;
        
        n = n-1;

        vector <ll> a(n);

        fore (i,0,n){
            cin >> a[i];
        }

        if (a[n-1] > bigg){
            cout << no; 
            continue;
        }

        if (a[n-1] < bigg){
            map <ll, bool> mp;
            a.pb(bigg);
            bool chk = true;
            
            for (int i = n; i > 0; i--){
                if (mp[a[i] - a[i-1]] || a[i] - a[i-1] > n+1){
                    chk = false;
                    break;
                } else mp[a[i] - a[i-1]] = true;
            }

            if (chk) cout << yes ;
            else cout << no;
        } else {
            map <ll, int> mp;    
            bool chk = false; 
            ll count = 0, count2 = 0, temp = 0;

            mp[a[0]]++;
            for (int i = n-1; i > 0; i--){
                mp[a[i] - a[i-1]]++;
                
                if (mp[a[i] - a[i-1]] == 2 || a[i] - a[i-1] > n+1) {
                    count++;
                    // cout << a[i] - a[i-1];
                    temp = a[i] - a[i-1];
                }               

                if (mp[a[i] - a[i-1]] > 2 || count > 2) {chk = true; break;}
            }

            if (chk) {cout << no; continue;}

            ll m1 = 0, m2 = 0;
            for (int i = 1; i<n+2; i++){
                if (mp[i] == 0){
                    if (m1 == 0) m1 = i;
                    else {
                        m2 = i;
                        break;
                    }
                }
            }

            if (m1 + m2 == temp || temp == 0) cout << yes;
            else cout << no;

        }

    }
}