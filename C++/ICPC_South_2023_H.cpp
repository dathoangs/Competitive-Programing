#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
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

    ll a, b, c, d, ans = -1, step;

    cin >> a >> b >> c >> d;
    step = a;

    bool chk = true;

    for (int i = 2; i*i < c; i++){
        if (c % i == 0) {
            chk = false;
            break;
        }
    }

    if (chk){
        if (a == d){
            cout << c;
        } else cout << a;
    } else {
        for (int i = a; i<=c; i+=step){
            if (i % b == 0) continue;
            if (d % i == 0) continue;
            if (i % a == 0 && c % i == 0){
                ans = i;
                break;
            }
        }

        cout << ans;
    }

}