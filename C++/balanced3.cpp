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

	int n, d = 0, m;
	cin >> n;

	m = abs(n);

	string s = "", r = "";

	while (m > 0){
		d = m%3;
		s += char(d+48);
		m /= 3;
	}

	s += char(48);

	fore (i,0,((int)s.length()){
		switch (s[i] - 48 + d){
			case 2:{
				r += "$";
				d = 1;
				break;
			};

			case 3:{
				r += "0";
				d = 1;
				break;
			}

			default:{
				r += s[i];
				d = 0;
				break;
			}
		}
	}


	if (r[r.length()-1] == '0'){
		r.erase(r.length()-1);
	}
	reverse(r.begin(), r.end());

	


	cout << endln;
	return 0;	
}