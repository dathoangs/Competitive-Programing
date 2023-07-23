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

int main() {
	freopen("input", "r", stdin);
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	ll n, m, cur = 6;

	cin >> m >> n;

	vector <tupple<int, int, int>> player(n);
	vector <int> team(6);

	vector <pair<int, int>> res[5000001];

	fore(i,0,n){
		ll a, b;
		cin >> a >> b;

		player[i] = {a, b, i};
	}

	sort(all(player));

	fore(i,0,6){
		team = get<1>(a[i]);
		
	}

	fore (int)

	cout << endln;
	return 0;	
}