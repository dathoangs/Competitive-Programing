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

    ll q;
    cin >> q;

    while (q--){
        ll n,t, ans = -1, mx = INT_MIN;

        cin >> n >> t;

        ll a[n], b[n];

        fore (i,0,n){
            cin >> a[i];
        }
        fore (i,0,n){
            cin >> b[i];
        }   

        fore (i,0,n){
            if (a[i] + i <= t && b[i] > mx){
                ans = i+1;
                mx = b[i];
            }
        }     

        cout << ans << "\n";



    }
}