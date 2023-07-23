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

        if (n == 1){ cout << 1 << "\n"; }
        else if (n == 2){ cout << "2 1\n"; }
        else {
            if (n & 1){
                cout << "-1\n";
            } else {
                ll a[n];
                a[0] = 0;
                a[1] = n-1;
                fore(i,2,n){
                    a[i] = a[i-2] + 1;
                    i++;
                    a[i] = a[i-2] - 1;
                }

                ll ans[n];
                ans[0] = n;
                ans[1] = n-1;

                fore (i,2,n){
                    ans[i] = n-a[i-1]+a[i];
                    i++;
                    ans[i] = n-1-ans[i-1];
                }

                fore (i,0,n){
                    cout << ans[i] << " ";
                }

                cout << "\n";
            }
        }
    }
}