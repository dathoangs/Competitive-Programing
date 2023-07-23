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
        ll n, x1, y1, x2, y2;

        cin >> n >> x1 >> y1 >> x2 >> y2;

        ll rib = n/2, pat1, pat2;

        if (x1 > rib){x1 = n - x1 +1;}
        if (y1 > rib){y1 = n - y1 +1;}         
        pat1 = min(x1, y1);

        if (x2 > rib){x2 = n - x2 +1;}
        if (y2 > rib){y2 = n - y2 +1;}         
        pat2 = min(x2, y2);

        cout << abs(pat1 - pat2) << "\n";
    }
}