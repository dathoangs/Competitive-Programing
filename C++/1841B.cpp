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
        ll n, f = -1, l= -1, tmp, l1;
        bool chk = true, chk1 = true;
        cin >> n;

        fore (i,0,n){
            cin >> tmp;

            if(f == -1){
                f = tmp; 
                l = tmp;
            } 

            if (chk && tmp >= l){
                l = tmp;
                cout << 1;
            }
            else {
                if (chk){
                    chk = false;

                    if (tmp > f){
                        cout << 0;
                    } else {
                        cout << 1;
                        l1 = tmp;   
                        chk1 = false;                     
                    }
                } else if (chk1){
                    if (tmp > f){
                        cout << 0;
                    } else {
                        cout << 1;
                        l1 = tmp;   
                        chk1 = false;                           
                    }
                    // cout << " " << tmp << nl;
                } else {
                    if (tmp >= l1 && tmp <= f){
                        cout << 1;
                    } else {
                        cout << 0;
                    }
                }
            }
        }

        cout << nl;

    }
}