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
    ll t;

    cin >> t;

    while (t--){
        
        ll n;
        cin >> n;

        ll a[n+1], tmp;
        a[0] = 0;

        fore (i,1,n+1){
            cin >> tmp;
            a[i] = a[i-1] + tmp;
        }

        ll l = 1, r = n, mid;
        
        while (l != r) {
            mid = (l + r + 1) / 2;

            cout << "? " << mid;
            fore (i,1,mid+1){
                cout << " " << i;
            }
            cout << "\n" << flush;

            ll res;
            cin >> res;

            if (res == a[mid] - a[l-1]){
                l = mid+1;
            } else {
                r = mid;
            }
        
        }

        cout << "! " << mid << "\n" << flush;
        
    }
}