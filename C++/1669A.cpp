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
        ll rating;
        cin >> rating;

        if (1900 <= rating) cout << "Division 1\n";
        else if (1600 <= rating && rating <= 1899) cout << "Division 2\n";
        else if (1400 <= rating && rating <= 1599) cout << "Division 3\n";
        else cout << "Division 4\n";
    }
}