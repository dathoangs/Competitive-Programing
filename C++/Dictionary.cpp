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

	ll chk = 0;
	map <string, int> mp;

	for (int i = 97; i<=122; i++){
		for (int j = 97; j<=122; j++){
			if (i == j){
				continue;
			}
			string tmp = "aa";
			tmp[0] = (char)i;
			tmp[1] = (char)j;
			chk++;
			mp[tmp] = chk;
		}
	}


	ll t;
	cin >> t;

	while (t--){
		string s;
		cin >> s;
		cout << mp[s] << endln;
	}

	cout << endln;
	return 0;	
}