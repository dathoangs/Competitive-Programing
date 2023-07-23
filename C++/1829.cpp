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
    
    ll t;
    cin >> t;

    while (t--){
        string s, cf = "codeforces";
        int ans = 0;

        cin >> s;

        fore(i,0,10){
            if (s[i] != cf[i]){
                ans++;
            }
        }

        cout << ans << "\n";
    }
}