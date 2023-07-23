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

bool cmp(string s1, string s2){
	if (s1[0] > s2[0]){
		if (s1.length() > s2.length()){
			return false;
		} else if (s1.length() == s2.length()) {
			
		}
	}
}

int main() {
	freopen("input", "r", stdin);
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	ll n;

	cin >> n;

	vector <string> s(n);

	fore (i,0,n){
		cin >> s[i];
	}

	sort(rall(s), );

	cout << s[0] << s[1] << s[2];

	cout << endln;
	return 0;	
}