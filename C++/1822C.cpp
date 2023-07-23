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

/*
4 - 26
5 - 37
6 - 50
*/

    ll t;
    cin >> t;

    while (t--){
        ll n;
        cin >> n;

        cout << n*(n+2) + 2 << "\n";
    }
}