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
        ll n;
        cin >> n;

        ll a[n][n-1];

        fore (i,0,n){
            fore (j,0,n-1){
                cin >> a[i][j];
            }
        }

        ll first = 0, second;
        pair <ll, ll> p;
        p.first = 0;
        p.second = 0;

        fore(i,0,n){
            if (first == 0) first = a[i][0];

            if (a[i][0] == first){
                p.first++;
            } else {
                second = a[i][0];
                p.second++;
            } 
        }

        ll tmp;
        if (p.first > p.second)
        {
            cout << first << " ";
            tmp = second;
        } else {
            cout << second << " ";
            tmp = first;
        }

        cout << tmp << " ";
        
        fore (i,1,n-1){
            fore (j,0,n){
                if (a[j][i] != tmp){
                    cout << a[j][i] << " ";
                    tmp = a[j][i];
                    break;
                }
            }
        }

        cout << nl;
    }
}