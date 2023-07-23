#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fore(i,b,a) for(int i = b; i<a; i++)
#define null NULL
#define endln "\n"
#define NO "NO\n"
#define YES "YES\n"
using namespace std;

int main() {
    //freopen("input", "r", stdin);
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    ll t;

    cin >> t;

    while (t--){
        ll n, m, tmp;
        ull ans = 0;

        cin >> n >> m;

        multiset <ll> st;

        fore(i,0,n){
            cin >> tmp;
            st.insert(tmp);
        }

        fore (i,0,m){
//            for(auto i = st.begin(); i!= st.end(); i++){
//                cout << " " << *i;
//            }
//            cout << endln;
            st.erase(st.begin());
            cin >> tmp;
            st.insert(tmp);
        }

        for(auto i = st.begin(); i!= st.end(); i++){
            ans += *i;
        }


        cout << ans << endln;
    }

    cout << endln;
    return 0;
}

