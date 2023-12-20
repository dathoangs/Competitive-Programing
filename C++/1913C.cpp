#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fore(i,b,a) for(int i = b; i<a; i++)
#define null NULL
#define nl '\n'
#define yes "YES\n"
#define no "NO\n"
using namespace std;

ull fpow(ull a, ull b)
{
    ull res = 1;
    while(b)
    {
        if(b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

multiset <ll> st;

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    ll q, val;
    ll t; cin >> t;
    while (t--){
        cin >> q >> val;

        if (q == 1){
            st.insert(fpow(2, val));
        } else {
            multiset<ll>::iterator p1 = st.begin(), p2 = st.begin();
            ll sum = 0;
            bool chk = false;
            
            while (true){
                if (sum == val){
                    chk = true;
                    break;
                } else if (sum < val){
                    if (p2 == st.end()) break;
                    sum += *p2;
                    p2++;
                } else {
                    if (p1 == st.end()) break;
                    sum -= *p1;
                    p1++;
                }
            }

            if (chk) cout << yes;
            else cout << no;
        }
    }
}