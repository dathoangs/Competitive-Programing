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

	string s;
	vector <int> b;
	string pat = "BGR"
	int a[3][3] = {0}, ans = 0;

	cin >> s;

	for (int i = 0; i<s.length(); i++){
		b.pb(pat.find(s[i]));
	}

	b.pb(b[0]);

	for (int i = 0; i<b.size(); i++){
		a[b[i]][b[i+1]]++;
	}

	for (int i = 0; i<3; i++){
		if (a[i][i] > ans)
			ans = a[i][i];
	}

	a[0][1] += a[1][0];
	if (ans < a[0][1]) ans = a[0][1];

	



	cout << endln;
	return 0;	
}