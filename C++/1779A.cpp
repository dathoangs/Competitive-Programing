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
        string s;
        bool chk = true;

        cin >> n >> s;

        fore (i,0,n-1){
            if (s.substr(i,2) == "RL"){
                cout << 0 << endln;
                chk = false;
                break;
            }

            if (s.substr(i,2) == "LR"){
                cout << i+1 << endln;
                chk = false;
                break;
            }
        }

        if (chk){
            cout << -1 << endln;
        }

    }

    cout << endln;
    return 0;
}
