#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define null NULL
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	string s;
	cin >> s;
	int q;
	
	vector <int> pre;
	pre.pb(0);
	
	for (int i = 1; i<=s.length(); i++){
		pre.pb(pre[i-1] + (int)s[i-1]) ;
	}
	
	cin >> q;
	
	while (q--){
		int a,x,y;
		cin >> a >> x >> y;
		x--;
		pre[y-x] += a;
	}
	
	for (int i = 0; i<pre.size(); i++){
		cout << (char)(pre[i+1]-pre[i]);
	}
//	for (int i = 0; i<pre.size(); i++){
//		cout << pre[i] << " ";
//	}
//	cout << s.length();

	
}


