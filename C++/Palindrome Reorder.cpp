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

    string s;

    cin >> s;

    ll mp[91] = {0}, chk = 0, pos = 0;

    fore(i,0,s.length()){
        mp[(int)s[i]]++;
    }

    fore(i,65,91){
        if (chk == 2) break;
        if (mp[i] & 1){
            pos = i;
            chk++;
        }
    }

    if (chk == 2){
        cout << "NO SOLUTION\n";
    } else {
        string tmp;
        fore(i,0,mp[pos]){
            tmp += (char)pos;
        }

        fore (i,65,91){
            if (i == pos) continue;

            if (mp[i] != 0){
                fore (j,0,mp[i]/2){
                    cout << (char)i;
                }
            }
        }

        cout << tmp;

        for (int i = 90; i>=65; i--) {
            if (i == pos) continue;

            if (mp[i] != 0){
                fore (j,0,mp[i]/2){
                    cout << (char)i;
                }
            }
        }        
    }


}