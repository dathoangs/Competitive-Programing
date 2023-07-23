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
        vector <ll> dict (123, 0);
        ll n, k, ans = 0;

        cin >> n >> k;

        string s; cin >> s;

        fore (i,0,n){
            dict[(int)s[i]]++;
        }

        fore(i,65,91){
            if (dict[i] > dict[i+32]){
                ans += dict[i+32];
                dict[i] -= dict[i+32];
                dict[i+32] = 0;

                if (k > 0){
                    if (dict[i]/2 <= k){
                        ans += dict[i]/2;
                        k -= dict[i]/2;
                    } else {
                        ans += k;
                        k = 0;                        
                    }
                }
                //aA /Bb
            } else if (dict[i] < dict[i+32]){
                ans += dict[i];
                dict[i+32] -= dict[i];
                dict[i] = 0;  
                
                if (k > 0){
                    if (dict[i+32]/2 <= k){
                        ans += dict[i+32]/2;
                        k -= dict[i+32]/2;
                    } else {
                        ans += k;
                        k = 0;                        
                    }
                }                              
            } else {
                ans += dict[i];
                dict[i+32] = 0;
                dict[i] = 0;                  
            }
        }

        cout << ans << endl;


    }
}