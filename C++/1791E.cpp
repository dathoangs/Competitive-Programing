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
    ll n, ans = 0;

    cin >> n;

    for (int i = 0; i<n; i++){
        for (int j = i; j<n; j++){
            ans++;
        }
    }

    cout << ans;
}