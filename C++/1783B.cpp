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

        ll mn = 1, mx = n*n;

        fore(i,0,n){
            if (i&1){
                fore (j,0,n){
                    if (!(j&1)){
                        cout << mx << " ";
                        mx--;
                    } else {
                        cout << mn << " ";
                        mn++;
                    }
                }
                cout << endln;
            } else {
                fore (j,0,n){
                    if (j&1){
                        cout << mx << " ";
                        mx--;
                    } else {
                        cout << mn << " ";
                        mn++;
                    }
                }
                cout << endln;
            }
        }
    }

    cout << endln;
    return 0;
}

