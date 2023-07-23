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

	ll n, mx = INT_MIN;

	cin >> n;

	string s, win;
	map <string, ll> score;

	fore (i,0,n){
		cin >> s;
		score[s]++;
		if (score[s] > mx){
			mx = score[s];
			win = s;
		}
	}



	cout << win;

	cout << endln;
	return 0;	
}