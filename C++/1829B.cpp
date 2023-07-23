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
        ll n;
        cin >> n;

        ll a[n];

        fore (i,0,n){
            cin >> a[i];
        }

        ll ans = 0, tAns = 0;

        fore (i,0,n){
            if (a[i] == 0){
                tAns++;
                ans = max(ans, tAns);
            } else {
                tAns = 0;
            }
        }

        cout << ans << "\n";


    }
}