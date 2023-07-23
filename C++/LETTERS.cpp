#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fore(i,b,a) for(int i = b; i<a; i++)
#define null NULL
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	ll n; cin >> n;

	string s; cin >> s;

	if (s[0] == '?'){
		s[0] = 'a';
	}

	if (s[n-1] == '?'){
		s[n-1] = 'b';
	}

	cout << s[n-1] - s[0];
}