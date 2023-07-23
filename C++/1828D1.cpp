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
        ll n, ans = 0;
        cin >> n;

        ll a[n];

        fore (i,0,n){
            cin >> a[i];
        }


        fore(i,0,n){
            set <ll> st;
            st.insert(a[i]);

            fore (j,i+1,n){
                st.insert(a[j]);

                ll k = i, l = k, r = k, cur = r;
                bool chk = true;
                set <ll> tmp1, tmp2;

                for (auto aa:st){
                    if (aa != a[k]){
                        if (chk){
                            l = k; 
                            r = k;
                            chk = false;
                        }
                        else{
                            r = k;
                            fore(kk,cur,r+1){
                                tmp1.insert(a[kk]);
                                tmp2.insert();
                            }
                        } 
                    } 
                    k++; 
                }

                ans += r - l;
            }
        }

        cout << ans << nl;
    }
}