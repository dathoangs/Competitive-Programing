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

    ll t; t = 1;

    
    while (t--){
        ll n;
        cin >> n;

        ll a[n];
        map <ll, ll> mp;

        fore (i,0,n){
            cin >> a[i];
        }

        fore (i,0,n){
            if (mp[a[i]] != 0) continue;
            
            fore (j,0,n-1){
                if (j == i) continue;
                fore (k,j+1,n){
                    if (__gcd(a[j], a[k]) % (2*a[i]) == 0){
                        mp[a[i]]++;
                    } 
                }
            }
        }

        fore (i,0,n){
            cout << mp[a[i]] << " ";
        }
    }
}