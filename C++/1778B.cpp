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
    freopen("input", "r", stdin);

    ll t;

    cin >> t;

    while (t--){
        ll n, m, d, total = 0;

        cin >> n >> m >> d;

        ll p[n], a[m];

        fore (i,0,n){
            cin >> p[i];
        }

        fore (i,0,m){
            cin >> a[i];
        }

        fore (i,0,m-1){
            ll moves = 0;
            while (p[a[i] < p[a[i+1] && p[a[i+1] <= p[a[i]+d){
                moves++;
                swap()
            }
        }
    }

    return 0;
}

