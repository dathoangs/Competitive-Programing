#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define for(a,i) for(int i = 0; i<a; i++)
#define size(a) a.size()
#define length(a) a.length()
#define null NULL
#define endln "\n"
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	string s, t;
	cin >> s >> t;

	reverse(all(s));

	if (s == t){
		cout << "YES";
	} else {
		cout << "NO";
	}
}