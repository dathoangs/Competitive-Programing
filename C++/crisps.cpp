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

	ll n, a, b, total = 0;
	char c;

	cin >> n >> a >> c >> b;

	total = a*100+b;

	vector <pair <string, ll>> arr;

	fore(i,0,n){
		string s;
		ll aa, bb;

		cin >> s >> aa >> c >> bb;

		if (aa < a && bb < b){
			arr.pb({s, aa*100+bb});			
		}

		

	}


	fore(i,0,n)

	cout << endln;
	return 0;	
}