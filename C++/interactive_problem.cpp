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
    ll l = 1, r = 2000000000, m = l + (r-l)/2;

    cout << m << nl;
    cout.flush();
    
    string s;
    while (cin >> s){
        if (s == "SINKS"){
            l = m+1;
        }

        if (s == "FLOATS"){
            r = m-1;
        }

        if (s == "OK"){
            break;
        }

        m = l + (r-l)/2;

        cout << m << nl;
        cout.flush();        
    }
}