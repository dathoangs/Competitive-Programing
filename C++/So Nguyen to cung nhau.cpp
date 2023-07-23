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

	cin >> n >> r;

	vector <int> p;

	for(int i = 0; i*i<n; i++){
		if (n % i == 0){
			p.pb(i);
			while (n%i == 0) n/= i;
		}
	}

	if (n > 1) { p.pb(n) };

	int sum = 0;

	for (int msk = 1; msk<(1<<p.size()); i++){
		int mult = 1;
		int flg = 0;
		
	}



	cout << endln;
	return 0;	
}