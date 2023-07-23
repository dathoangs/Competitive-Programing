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
        ll n, tmp, even = 0;
        cin >> n;

        vector <ll> odd;

        fore(i,0,n){
            cin >> tmp;

            if (tmp & 1){
                odd.pb(tmp);
            } else {
                even += tmp;
            }
        }

        bool chk = true;
        ll sum = 0;

        fore (i,0,odd.size()){
            sum += odd[i];

            if (even <= sum){
                chk = false;
                break;
            }
        }
        
        if (chk){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}