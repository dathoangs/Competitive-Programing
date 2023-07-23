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

    ll n;

    cin >> n;

    if (n == 0){
        cout << 1;
        return 0;
    }

    n %= 4;

    if (n == 1){
        cout << 8;
    } else if (n == 2){
        cout << 4;
    } else if (n == 3){
        cout << 2;
    } else if (n == 0){
        cout << 6;
    }

    cout << endln;
    return 0;
}

