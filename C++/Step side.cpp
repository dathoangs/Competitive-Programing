#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fore(i,b,a) for(int i = b; i<a; i++)
#define null NULL
#define endln "\n"
using namespace std;

int main() {
    freopen("input", "r", stdin);
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    ll n, q;

    cin >> n >> q;

    int a[n] = {0}, diff[n+1] = {0};

    while (q--){
        ll l, r, k;

        cin >> l >> r >> k;

        diff[l-1] += k;
        diff[r] -= k;
    }

    fore(i,0,n+1){
        cout << diff[i] << " ";
    }
    cout << endln;

    for(int i = 0; i<n; i++){
        if (i == 0){
            a[0] = diff[0];
        } else {
            a[i] = a[i-1] + diff[i];
        }
        
    }
 


    cout << endln;
    return 0;    
}