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

    ll t; cin >> t;

    while (t--){
        ll n, tmp1;
        string tmp2;
        cin >> n;

        vector <pair<ll, string>> a(n);

        fore (i,0,n){
            cin >> tmp1 >> tmp2;

            a[i] = {tmp1, tmp2} ;
        }

        sort (all(a));

        bool b1 = true, b2 = true, b3 = true;
        ll s1 = INT_MAX, s2 = INT_MAX, s3 = INT_MAX;


        fore (i,0,n){
            if (a[i].second == "10" && b1){
                s1 = a[i].first;
                b1 = false;
            }

            if (a[i].second == "01" && b2){
                s2 = a[i].first;
                b2 = false;
            }

            if (a[i].second == "11" && b3){
                s3 = a[i].first;
                b3 = false;                
            }

            if (!(b1 || b2 || b3)){
                break;
            }
        }

        if (min(s1 + s2, s3) >= INT_MAX){
            cout << -1 << "\n";
        } else {
            cout << min(s1 + s2, s3) << "\n";
        }
    }
}