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
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    ll t;

    cin >> t;

    while (t--){
        ll n, k;

        cin >> n >> k;
        ll it1 = 1, it2 = n;

        for (int i = 1; i<n+1; i++){
            if (i&1){
                cout << it2 << " ";
                it2--;
            } else {
                cout << it1 << " ";
                it1++;
            }
        }


        cout << endln;
    }

    cout << endln;
    return 0;
}

