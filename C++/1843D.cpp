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
vector <ll> g[20005];
map <ll, bool> visited;

bool dfs(ll n, ll des){
	if (n == des){
		return true;
	}
 
	if (!visited[n]){
		visited[n] = true;
		for (int i = 0; i<g[n].size(); i++){
            dfs(g[n][i], des);				
		}		
	}
	return false;
}

int main() {
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

    ll t; cin >> t;
    while (t--){
        ll n, q, tmp1, tmp2, ans = 0;

        vector <ll> last;

        cin >> n;

        fore (i,0,n){
            cin >> tmp1 >> tmp2;
            g[tmp1].pb(tmp2);
            g[tmp2].pb(tmp1);
        }

        cin >> q;
        pair <ll, ll> b[n];

        fore (i,1,n+1){
            if (g[i].size() == 1 && i!=1){
                last.pb(i);
            }
        }

        fore (i,0,q){
            ans = 0;

            cin >> tmp1 >> tmp2;
            
            fore (i,0,last.size()){
                if (dfs(tmp1, last[i])) ans++;
            }
            visited.clear();

            fore (i,0,last.size()){
                if (dfs(tmp2, last[i])) ans++;
            }
            visited.clear();

            cout << ans << nl;  
        }    
    }
}