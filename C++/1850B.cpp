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

bool cmp (pair <ll, ll> a, pair<ll, ll> b){
    if (a.first != b.first)
        return (a.first > b.first);
    else
       return (a.second < b.second);
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    ll t; cin >> t;
    while (t--){
        ll n, a, b, pos = 0, mx = 0;
        cin >> n;

        

        fore (i,0,n){
            cin >> a >> b;
            
            if (a <= 10 && b > mx){
                pos = i;
                mx = b;
            }
        }

        cout << pos+1 << nl;
    }
}