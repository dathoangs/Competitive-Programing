#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fore(i,b,a) for(int i = b; i<a; i++)
#define null NULL
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    ll t;

    cin >> t;

    while (t--){
        ll n, c, ans = 0, mx = 0;
        cin >> n >> c;

        ll a[n+1];
        vector <ll> cost(n+1);
        a[0] = 0;
        cost[0] = 0;

        fore (i,1,n+1){
            cin >> a[i];
        }

        fore (i,1,n+1){
            cost[i] = a[i]+i;
        }

        sort (all(cost));

        fore (i,1,n+1){
            if (mx+cost[i] <= c){
                mx += cost[i];
                ans++;
            }
        }

        cout << ans << "\n";
    }
}