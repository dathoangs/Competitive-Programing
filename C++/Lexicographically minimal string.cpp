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

map <char, char> p;

char find (char a){
    if (a == p[a]) return a;
    if (p[a] == 0) return a;
    
    return p[a] = find(p[a]);
}

void merge (char a, char b){
    char ra = find(a);
    char rb = find(b);

    if (ra <= rb){
        p[rb] = ra;
    } else {
        p[ra] = rb;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    string a, b, c;

    cin >> a >> b >> c;
    
    ll n = a.length();

    fore (i,0,n){
        merge(a[i], b[i]);
    }

    n = c.length();

    fore (i,0,n){
        cout << find(c[i]);
    }
}