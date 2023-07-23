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
    freopen("output", "w", stdout);
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    ll t;
    cin >> t;

    while (t--){
        ll n;
        bool chk = false;

        cin >> n;

        vector <ll> a(n), pre(n);

        fore(i,0,n){
            cin >> a[i];
        }

        sort(rall(a));

        fore (i,0,n-1){
            if (a[i] == a[i+1]){
                a.insert(a.begin()+i+1, a[a.size()-1]);
                a.erase(a.end() - 1);
            }
        }

        pre[0] = a[0];

        fore(i,1,n){
            pre[i] = pre[i-1]+a[i];
        }

        fore (i,1,n){
            if (a[i] == pre[i-1]){
                chk = true;
                break;
            }
        }

        if (chk){
            cout << NO;
        } else {
            cout << YES;
            fore (i,0,n){
                cout << a[i] << " ";
            }
            cout << endln;
        }


    }

    cout << endln;
    return 0;
}

