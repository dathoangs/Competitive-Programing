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

        ll s[n];

        fore (i,0,n){
            cin >> s[i];
        }
        if (s[n-1] == 1){
            cout << no;
        } else {
            // cout << s[n-1] << " " << n-1 << " ";
            cout << yes;
            ll num = 0;
            for (int i = n-1; i>=0; i--){
                if (s[i] == 0){
                    cout << 0 << " ";
                } else {
                    num++;
                    if (i == 0){
                        if (s[i] == 1){
                            cout << num << " ";
                        }
                    }
                    else if(s[i-1] == 0){
                        cout << num << " ";
                        num = 0;
                    } else {
                        cout << 0 << " ";
                    }
                }
            }
            cout << nl;
        }

    }
}