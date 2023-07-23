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

int main() {
	// freopen("input", "r", stdin);
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	ll n, tmp, total = 0, level;

	cin >> n;

	vector <ll> p(n), a(n-1);
	map <ll,bool> chk;

	cin >> level;
	fore(i,0,level){
		cin >> tmp;

		if (!chk[tmp]){
			total += tmp;
			chk[tmp] = true;
		}
	}

	cin >> level;
	fore(i,0,level){
		cin >> tmp;

		if (!chk[tmp]){
			total += tmp;
			chk[tmp] = true;
		}
	}


	if (n*(n+1)/2 == total){
		cout << "I become the guy.";
	} else {
		cout << "Oh, my keyboard!";
	}

	cout << endln;
	return 0;	
}