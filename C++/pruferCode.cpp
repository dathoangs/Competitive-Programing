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
int maxN = 100001;

int n, a, b;
vector <ll> g[maxN];
int degree[maxN];
bool killed[maxN];

vector <int> prufer_code(){
	set <int> leaves;

	for (int i = 0; i<n; i++){
		degree[i] = (int) g[i].size();

		if (degree[i] == 1){
			leaves.insert(i);
			killed[i] = false;
		}
	}

	vector <int> result(n-2);

	for (int iter=0; iter<n-2; iter++){
		int leaf = *leaves.begin();

		leaves.erase(leaves.begin());

		killed[leaf] = true;

		int v;

		for (size_t i=0; i<g[leaf].size(); i++){
			if (!killed[g[leaf][i]]){
				v = g[leaf][i];
			}
			result[iter] = v;
			if (--degree[v] == 1){
				leaves.insert(v);
			}
		}
	}
	return result;
}

vector <pair<int, int>> prufer_decode(const vector<int> &prufer_code){
	n+= 2;
	vector <int> degree (n,1);
	for (int i = 0; i<n-2; i++){
		++degree[prufer_code[i]];
	}

	set <int> leaves;

	for (int i = 0; i<n; i++){
		if (degree[i] == 1){
			leaves.insert(i);
		}
	}
}


int main() {
	freopen("input", "r", stdin);
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	cin >> n;

	for(int i = 0; i<n-1; i++){
		cin >> a >> b;
		a--; b--;
		g[a].pb(b);
		g[b].pb(a);
	}

	vector <int> ans(n-2);

	ans = prufer_code();

	for (int i:ans){
		cout << i+1 << ' ';
	}

	cout << endln;
	return 0;	
}