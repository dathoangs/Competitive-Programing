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

ll st[4*100000] = {INT_MAX};

ll get(ll l, ll r, ll id, ll left, ll right, ll p){
    if (left > r || right < l) return 0;
    if (l == r && st[id] <= p) {
        cout << l << " " << r << nl;
        st[id] = INT_MAX;
        return 1;
    }
    
    ll mid = (l+r)/2;

    if (left <= l && r <= right && st[id] <= p){ 
        return get(l, mid, id*2, left, right, p) + get(mid+1, r, id*2+1, left, right, p);  
    } 

    return 0;
}

void update(ll l, ll r, ll id, ll pos, ll val){
    if (pos < l || pos > r) return;

    if (l == r){
        st[id] = val;
        return;
    }

    ll mid = (l+r)/2;

    update(l,mid, id*2, pos, val);
    update(mid+1, r, id*2+1, pos, val);

    st[id] = min(st[id*2], st[id*2+1]);

    return;
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    ll n, k;
    cin >> n >> k;

    fore (i,0,4*n) st[i] = INT_MAX;

    fore (i,0,k){
        ll a, b, c, d;
        cin >> a;

        if (a == 1){
            cin >> b >> c;
            update(0, n-1, 1, b, c);
        } else {
            cin >> b >> c >> d;
            cout << get(0, n-1, 1, b, c, d) << nl;
        }
    }
}