#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fore(i,b,a) for(int i = b; i<a; i++)
#define null NULL
#define endln "\n"
using namespace std;
ll maxN = 100001;

vector <ll> g[maxN];
ll parent[maxN];

void dfs (int v){
	for (size_t i=0; i<g[v].size(); i++){
		int to = g[v][i];

		if (to != parent[v]){
			parent[to] = v;
			dfs(to);
		}
	}
}

int main() {
	freopen("input", "r", stdin);
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);



	cout << endln;
	return 0;	
}