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

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    ll n;
    cin >> n;

    ll a[n], pre[n];

    fore (i,0,n){
        cin >> a[i];
    }    

    pre[0] = a[0];

    fore(i,1,n){
        pre[i] = pre[i-1] + a[i];
    }

    ll p1 = 0, p2 = 0, l, r, ans = 0;

    while (p2 < n){
        if (pre[p2] - pre[p1] > ans){
            ans = pre[p2] - pre[p1];
            r = p2;
        }
        p2++;
    }

    p2 = r;

    while (p1 <= p2){
        if (pre[p2] - pre[p1] > ans){
            ans = pre[p2] - pre[p1];
            l = p1;
        }
        p1--;
    }
}