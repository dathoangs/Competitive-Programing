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
        ll n, q;
        bool odd;

        cin >> n >> q;

        ll pre[n+1], tmp;
        pre[0] = 0;

        fore (i,1,n+1){
            cin >> tmp;
            pre[i] = pre[i-1] + tmp;
        }

        if (pre[n] & 1){
            odd = true;
        } else {
            odd = false;       
        }

        while (q--){
            ll l, r, k, sum;
            bool chk = true;

            cin >> l >> r >> k;

            sum = k * (r-l+1);

            if (odd){
                if ((pre[r] - pre[l-1]) % 2 == 0 && sum & 1 ){
                    chk = false;
                } 
                if ((pre[r] - pre[l-1]) % 2 != 0 && sum % 2 == 0 ){
                    chk = false;
                }
            } else {
                if ((pre[r] - pre[l-1]) % 2 == 0 && sum % 2 == 0 ){
                    chk = false;
                } 
                if ((pre[r] - pre[l-1]) % 2 != 0 && sum % 2 != 0 ){
                    chk = false;
                }                
            }

            // cout << odd << " " << pre[r] - pre[l-1] << " " << sum << " ";

            if (chk){
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }


    }
}