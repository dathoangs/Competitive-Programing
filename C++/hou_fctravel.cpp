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

vector <ll> g[30005];
bool chk = false;
map <ll, bool> visited;

void dfs(ll n, ll des){
	if (n == des){
		chk = true;
		return;
	}

	if (!visited[n]){
		visited[n] = true;
		for (int i = 0; i<g[n].size(); i++){
			dfs(g[n][i], des);				
		}		
	}
	return;
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    ll t; cin >> t;
    while (t--){
        
    }
}