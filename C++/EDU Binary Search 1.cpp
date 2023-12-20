#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
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

    ll t = 1;
    while (t--){
        ll n, k;
        cin >> n >> k;

        ll a[n], q;

        fore (i,0,n){
            cin >> a[i];
        }
        sort(a, a+n);
        fore (i,0,k){
            cin >> q;


            ll l = 0, r = n, mid;
            bool chk = false;

            while (l <= r){
                mid = l+ (r-l)/2;

                if (a[mid] == q){
                    chk = true;
                    break;
                } else {
                    if (a[mid] > q){
                        r = mid-1;
                    } else {
                        l = mid+1;
                    }
                }
            }

            if (chk) cout << yes;
            else cout << no;
        }                
    }
}