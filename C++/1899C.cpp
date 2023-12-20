#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
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

        ll a[n], pre[n+1];

        fore(i,0,n){
            cin >> a[i];
        }

        pre[0] = 0;

        fore (i,0,n){
            pre[i+1] = a[i]+pre[i];
        }

        ll p1, p2, ans = INT_MIN;

        fore (i,0,n){
            p1 = i;
            p2 = i;
            ans = max(ans, a[i]);
            ll vtri = p2;

            while (p2 < n){
                if (int(a[p2+1] & 1) != int(a[p2] & 1)){
                    p2++;
                    if (p2 == n && ans < pre[p2]-pre[p1]){
                        ans = pre[p2]-pre[p1];
                        vtri = p2;
                    } 
                    else if (ans < pre[p2+1]-pre[p1]){
                        ans = max(ans, pre[p2+1]-pre[p1]);
                        vtri = p2+1;
                    } 
                } else {
                    break;
                }
            }

            
        }
        cout << ans << nl;
    }
}