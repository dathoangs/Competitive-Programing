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
        ll n;
        string s;
        map <char, int> mp;
        bool chk = true;

        cin >> n;
        cin >> s;

        fore (i,0,n){
            if (mp[s[i]] == 0){
                if (i % 2 != 0){
                    mp[s[i]] = 1;
                } else {
                    mp[s[i]] = 2;
                }
            } else {
                if (mp[s[i]] == 1){
                    if (i % 2 == 0){
                        chk = false;
                        break;
                    }
                } else {
                    if (i & 1){
                        chk = false;
                        break;
                    }                    
                }
            }
        }
        if (chk) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}