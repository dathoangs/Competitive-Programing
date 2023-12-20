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

ll a[100000];
tuple<ll, ll, ll, ll> st[4*100000];

tuple<ll, ll, ll, ll> build(ll l, ll r, ll id){
    if (l == r){
        get<0>(st[id]) = a[l]; // Tổng toàn segment
        get<1>(st[id]) = a[l]; // Max Tổng từ trái
        get<2>(st[id]) = a[l]; // Max Tổng từ phải
        get<3>(st[id]) = a[l]; // Max 
        return st[id]; 
    }

    ll mid = (l+r)/2;

    st[id*2] = build(l, mid, id*2);
    st[id*2+1] = build(mid+1, r, id*2+1);
    
    get<0>(st[id]) = get<0>(st[id*2]) + get<0>(st[id*2+1]);
    get<1>(st[id]) = get<1>(st[id*2]) + get<1>(st[id*2+1]);
    get<2>(st[id]) = get<2>(st[id*2]) + get<2>(st[id*2+1]);
    get<3>(st[id]) = max({});

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

ll update(ll l, ll r, ll id, ll pos, ll val){
    if (pos < l || pos > r) return st[id];

    if (l == r){
        st[id] = val;
        return st[id];
    }

    ll mid = (l+r)/2;

    update(l,mid, id*2, pos, val);
    update(mid+1, r, id*2+1, pos, val);

    return st[id];
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    ll t; cin >> t;
    while (t--){
        
    }
}