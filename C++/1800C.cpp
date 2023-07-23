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

    ll t; cin >> t;

    while (t--){
        ll n, cnt, ans = 0;
        bool chk;

        cin >> n;

        vector <ll> a(n), heroes, buff;

        fore (i,0,n){
            cin >> a[i];
            if (a[i] != 0){
                buff.pb(a[i]);
            }
            
            if (a[i] == 0){
                cnt = 0;
                while (a[i] == 0){ 
                    i++;
                    cnt++;
                    if (i >= n){
                        break;
                    }
                    cin >> a[i];                    
                }
                if (buff.size() > 0){
                    sort(rall(buff));
                    ll tmp = min(cnt, (ll)buff.size());

                    //cout << cnt << " " << buff.size() << " ";

                    fore(i,0,tmp){
                        ans += buff[i];
                        buff[i] = 0;
                    }

                    //buff.clear();
                    cnt = 0;
                }
                if (a[i] != 0){
                    buff.pb(a[i]);
                }                
            }


        }

        cout << ans << "\n";



    }
}