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
        ll a, b;
        cin >> a >> b;

        if (a > b) swap(a, b);

        if ((a + b) % 3 == 0 && a*2 >= b){
            cout << "YES\n";
        } else cout << "NO\n";
    }
}