#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fore(i,b,a) for(int i = b; i<a; i++)
#define null NULL
#define nl '\n'
#define yes "YES\n"
#define no "NO\n"
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    ll n, m, q;
    cin >> n >> m >> q;

    ll hang[n+1] = {0}, cot[m+1] = {0};

    ll tmp, a, b, c, d;
    fore (i,0,q){
        cin >> tmp;

        if (tmp == 1){
            cin >> a >> b;

            hang[a] += b;
        }

        if (tmp == 2){
            cin >> a >> b;
            cot[a] += b;
        }

        if (tmp == 3){
            ll val1 = 0, val2 = 0;
            cin >> a >> b >> c >> d;

            if (a > c) swap(a, b);
            if (b > d) swap(b, d);

            fore (i,a,c+1){
                val1 = max(val1, hang[i]);
            }

            fore (i,b,d+1){
                val2 = max(val2, cot[i]);
            }

            cout << val1 + val2 << nl;
        }
    }
    
}