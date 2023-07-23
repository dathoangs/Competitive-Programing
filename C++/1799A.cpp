// #pragma GCC optimize("O3,unroll-loops")
// #pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
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
        ll n, m, tmp, cur;
        cin >> n >> m;
        cur = n;

        ll a[n+1] = {0};
        map <ll, bool> mp;

        fore (i,0,m){
            cin >> tmp;
            if (mp[tmp] == false){
                a[cur] = i+1;
                mp[tmp] = true;
                cur--;
            }
        }


        fore (i,1,n+1){
            if (a[i] == 0){
                cout << -1 << " ";
            } else {
                cout << a[i] << " ";
            }
        }
        cout << nl;
    
    }
}