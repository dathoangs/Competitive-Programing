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

vector <ll> Z, S;
vector <vector<ll>> L, W;

// dfs from vertex i
void dfs(int i) {
    // iterate each edge of vertex i that is directed away from it
    for(int j = 1; j <= S[i]; j++) {
        Z.push_back(W[i][j]); // add the integer in the edge to the end of Z
        dfs(L[i][j]); // recurse to the next vertex
    }
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    ll t; cin >> t;
    while (t--){
        ll n;
        cin >> n;

        fore (i,0,n){
            
        }
    }
}