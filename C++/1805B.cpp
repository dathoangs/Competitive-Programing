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
        ll n, ind;
        string s;
        char smallest;

        cin >> n >> s;

        ind = n-1;
        smallest = s[n-1];

        fore(i,0,n){
            if (s[i] == smallest && i > ind){
                ind = i;                
            }

            if (s[i] < smallest){
                smallest = s[i];
                ind = i;
            }
        }

        cout << smallest;
        fore(i,0,n){
            if (i == ind) continue;

            cout << s[i];
        }

        cout << nl;


    }
}