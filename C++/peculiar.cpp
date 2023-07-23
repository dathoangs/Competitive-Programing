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
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	int n, m, k = 0, p = 26, p1 = 25;
	vector <ll> a, b;

	a.emplace_back(0);
	b.emplace_back(0);

	while(true){
		k++;
		a.emplace_back(1 + (k-1)*p1);
		b.emplace_back()

	}

	
	cin >> n;
	n--;



	int ln = upper_bound(b.begin(), b.end(), n)-b.begin();
	m = (n-b[ln-1]) / a[ln];
	n = (n-b[ln-1]) % a[ln];

	char c = 'a'+m;
	string sc, st;

	vector <string> res;

	sc = "";

	fore(i,0,ln-1){
		sc += c;
		for (char x = 'a', x<='z'; x++){
			if (x == c) { continue; }
			st = sc;

			for (int j = i+1; j<ln; j++) { 
				st += x; 
			}

			res.emplace_back(st);
		}
	}

	res.emplace_back(sc+c);

	sort(res.begin(), res.end());

	cout << res[n];

	cout << endln;
	return 0;	
}