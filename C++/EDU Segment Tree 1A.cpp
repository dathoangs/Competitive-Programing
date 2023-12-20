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

ll st[4*100000], a[100000];

ll build(ll l, ll r, ll id){
    if (l == r){
        return st[id] = a[l];
    }

    ll mid = (l+r)/2;

    st[id*2] = build(l, mid, id*2);
    st[id*2+1] = build(mid+1, r, id*2+1);
    
    st[id] = st[id*2] + st[id*2+1];
    return st[id];
}

ll get(ll l, ll r, ll id, ll left, ll right){
    if (left > r || right < l) return 0;
    
    ll mid = (l+r)/2;

    if (left <= l && r <= right){
        return st[id];
    } 

    return get(l, mid, id*2, left, right) + get(mid+1, r, id*2+1, left, right);
}

void update(ll l, ll r, ll id, ll pos, ll val){
    if (pos < l || pos > r) return ;

    if (l == r){
        st[id] = val;
        return;
    }

    ll mid = (l+r)/2;

    update(l,mid, id*2, pos, val);
    update(mid+1, r, id*2+1, pos, val);

    st[id] = st[id*2] + st[id*2+1];

    return;
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    ll n, m;
    cin >> n >> m;

    fore (i,0,n) cin >> a[i];

    build(0, n-1, 1);

    while (m--){
        ll q, x, y;
        cin >> q >> x >> y;

        if (q == 1){
            update(0, n-1, 1, x, y);
        } else {
            cout << get(0, n-1, 1, x, y-1) << nl;
        }
    }
}