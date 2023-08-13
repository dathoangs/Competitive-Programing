#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
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

// Sắp xếp dãy giảm dần
bool cmp (ll a, ll b){
    return a >= b; 
}

/*
======>> Sort pair 
======>> first - giảm dần 
======>> second - tăng dần
*/ 
// bool cmp (pair <ll, ll> a, pair<ll, ll> b){
//     if (a.first != b.first)
//         return (a.first > b.first);
//     else
//        return (a.second < b.second);
// }

/*
======>> Sort tuple gồm 3 giá trị 
======>> 0 - giảm dần 
======>> 1 - tăng dần
======>> 2 - tăng dần
*/ 
// bool cmp (tuple <ll, ll, ll> a, tuple <ll, ll, ll> b){
//     if (get<0>(a) != get<0>(b))
//         return (get<0>(a) > get<0>(b));
//     else if (get<1>(a) != get<1>(b))
//        return (get<1>(a) < get<1>(b));
//     else
//         return (get<2>(a) < get<2>(b));
// }


int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    ll a[5] {1, 2, 3, 4, 5};

    sort (a, a+5, cmp);

    for (auto i: a){
        cout << i << " ";
    }

}