#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fore(i,b,a) for(int i = b; i<a; i++)
#define null NULL
#define endln "\n"
#define NO "NO\n"
#define YES "YES\n"
#define mod 1000000007
using namespace std;

ll farm[100000000];

int main() {
    freopen("input", "r", stdin);
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    ll t;

    cin >> t;

    farm[1] = 2;

    while (t--){
        ll n, ans = 0;

        cin >> n;

        if (farm[n] == 0){
            ll pos = n;

            while (farm[pos] == 0){
                pos--;
            }

            ans = farm[pos];

            fore(i,pos+1,n+1){
                ans += (i*(i+1)) % mod;
                ans = ans % mod;
                farm[i] = ans;
            }

            cout << ans << endl;
        } else {
            cout << farm[n] << endl;
        }
    }

    return 0;
}










