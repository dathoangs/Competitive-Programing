#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fore(i,b,a) for(int i = b; i<a; i++)
#define null NULL
#define endln "\n"
#define NO "NO\n"
#define YES "YES\n"
using namespace std;
map <ll, bool> visited;
ll ans = 0;

void dfs(vector <vector<ll>> g){
	if (!visited[n]){
		visited[n] = true;
		for (int i = 0; i<g[n].size(); i++){
			ans++;
			dfs(g[n][i], des);				
		}		
	}
	return;
}

int main() {
	freopen("input", "r", stdin);
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);



	cout << endln;
	return 0;	
}