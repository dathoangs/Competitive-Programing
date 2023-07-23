#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
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

    ll t; cin >> t;
    while (t--){
        ll n, k, x, y;
        bool chk = false;
        cin >> n >> k;

        fore (i,0,n/2+1){
            if ( ((n-i)*(n-i-1))/2 + (i*(i-1))/2 == k ){
                x = n-i;
                y = i;
                chk = true;
                break;
            }
        }

        if (chk){
            cout << yes;
            fore (i,0,x){
                cout << 1 << " ";
            }

            fore (i,0,y){
                cout << -1 << " ";
            }
            
            cout << nl;
        } else {
            cout << no;
        }

    }
}