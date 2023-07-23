#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fore(i,b,a) for(int i = b; i<a; i++)
#define null NULL
#define endln "\n"
#define M 998244353
using namespace std;

int main() {
	freopen("input", "r", stdin);
	freopen("output", "w", stdout);
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	string pat = "0123456789ABCDEF";

	string h[16];

	fore(i,0,16){

	}

	string s, sc;
	int k, p;
	cin >> sc >> k;

	p = pat.find(sc[0]);
	s = h[p];

	while(s[0] == '0')
		s.erase(0,1);

	fore(i, 1, sc.size()){
		p = pat.find(sc[i]);
		s += h[p];
	}

	reverse(s.begin(), s.end());

	int ls = s.size(), lps = ls-1;

	vector <ll> ps(ls, 0);

	ps[0] = 1;

	fore(i, 1, ls){
		for (int j = i; j>0; j--){
			ps[j] = (ps[j]+ps[j-1])%M;
		}
	}

	

	cout << endln;
	return 0;	
}