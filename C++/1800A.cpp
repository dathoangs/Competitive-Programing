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
        bool chk = true, m = false, e = false, o = false, w = false;

        cin >> n;

        string s;
        cin >> s;

        fore(i,0,n-1){

            if (tolower(s[0]) != 'm'){
                chk = false;
                break;
            }
            
            if (tolower(s[i]) == 'm'){
                m = true;
                if (tolower(s[i+1]) == 'm' || tolower(s[i+1]) == 'e'){
                    
                } else {
                    chk = false;
                    break;
                }
            }

            if (tolower(s[i]) == 'e'){
                e = true;
                if (tolower(s[i+1]) == 'e' || tolower(s[i+1]) == 'o'){
                    
                } else {
                    chk = false;
                    break;
                }
            }    

            if (tolower(s[i]) == 'o'){
                o = true;
                if (tolower(s[i+1]) == 'w'){
                    w = true;
                }
                if (tolower(s[i+1]) == 'o' || tolower(s[i+1]) == 'w'){
                 
                } else {
                    chk = false;
                    break;
                }
            }   

            if (tolower(s[i]) == 'w'){
                w = true;
                if (tolower(s[i+1]) == 'w'){
                    
                } else {
                    chk = false;
                    break;
                }
            }               
        }
        

        if (chk && m && e && o && w){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}