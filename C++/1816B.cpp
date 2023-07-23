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
        ll n, mx, mn;
        cin >> n;

        ll a[2][n];

        a[0][0] = n*2-1;
        a[1][n-1] = n*2;


        fore (i,0,2){
            if (i&1) {mn = 1; mx = n*2-3;}
            else {mn = 2; mx = n*2-2;}

            fore(j,0,n){
                if (i == 0 && j == 0) continue;
                if (i == 1 && j == n-1) continue;
                
                // cout << i << j << " " << mn << nl;
                a[i][j] = mn;
                mn += 2;
                

                j++;
                if (j<n-1){
                    a[i][j] = mx;
                    // cout << i << j << " " << mx << nl;
                    mx -= 2;
                }
                
                
            }
        }

        fore(i,0,2){
            fore(j,0,n){
                cout << a[i][j] << " ";
            }
            cout << nl;
        }
    }
}