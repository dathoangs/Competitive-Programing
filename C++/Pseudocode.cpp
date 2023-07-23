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

	string s;
	cin >> s;
	vector<int> a;
	for(int i=0; i<s.size(); ++i){
		if(s[i] == s[0]){
			a.push_back(i);
		}
	}
	int t,q;
	cin >> t;
	while(t--){
		cin >> q;
		bool check = 0;
		for(int i=0; i<q; ++i){
			if(s[i] != s[s.size() - i - 1]){
				check = 1;
			}
		}
		if(check){
			cout << "NO" << '\n';
			continue;
		}
		int c = 0;
		for(auto j: a){
			check = 1;
			for(int i=0; i<q; ++i){
				if(i == s.size() - 1){
					check = 0;
				}
				if(s[i] != s[i + j]){
					check = 0;
				}
			}
			if(check){
				c++;
			}
		}

		if(c >= 3){
			cout << "YES " << c;
		}
		else{
			cout << "NO";
		}
		cout << '\n';
	}
}