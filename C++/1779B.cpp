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
//    freopen("input", "r", stdin);
//    freopen("output", "w", stdout);
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    ll t;

    cin >> t;

    while (t--){
        ll n;

        cin >> n;

        if (n & 1){
            if (n == 3){
                cout << NO;
            } else {
                cout << YES;
                fore (i,0,n/2){
                    cout << -(n/2 - 1) << " " << n/2 << " ";
                }
                cout << -(n/2 - 1) << endln;
            }
        } else {
            cout << YES;
            fore (i,0,n/2){
                cout << 1 << " " << -1 << " ";
            }
            cout << endln;
        }
    }

    cout << endln;
    return 0;
}

