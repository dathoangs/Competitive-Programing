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
using namespace std;

int main() {
    //freopen("input", "r", stdin);

    ll t;

    cin >> t;

    while (t--){
        ll n, ans = 0, pos = 0;
        bool negative = false, done = false;

        cin >> n;
        ll a[n];

        fore(i,0,n){
            cin >> a[i];
            if (!negative && a[i] == -1){
                negative = true;
                pos = i;
            }
            ans += a[i];
        }

        fore (i,0,n-1){
            if (a[i] == -1 && a[i+1] == a[i]){
                ans += 4;
                done = true;
                break;
            }
        }

        if (!done){
            if (!negative){
                ans -= 4;
            }
        }

        cout << ans << endln;

    }

    return 0;
}
