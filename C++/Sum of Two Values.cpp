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

    ll n, x;
    cin >> n >> x;

    vector <ll> a(n);

    fore (i,0,n){
        cin >> a[i];
    }

    sort (all(a));

    ll it1 = 0, it2 = 0, val1, val2;

    while (it1 != n-2){
        if (it1 == it2){
            it2++;
        }

        if (a[it1] + a[it2] == x){
            val1 = a[it1];
            val2 = a[it2];
            break;
        }

        if (a[it1])


    }
}