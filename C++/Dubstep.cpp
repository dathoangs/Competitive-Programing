#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fore(i,b,a) for(ull i = b; i<a; i++)
#define null NULL
#define endln "\n"
using namespace std;

int main() {
	// freopen("input", "r", stdin);
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	string s;

	cin >> s;

	for(ull i = 0; i<s.length(); i+=3){
		if (s.substr(i,3) == "WUB"){
			continue;
		} else {
			while(s.substr(i,3) != "WUB" && s.length()-i >= 3) {
			    cout << s[i];
			    i++;
			}
			if (s.length()-i < 3){
				for(ull j = i; j<s.length(); j++){
					cout << s[j];
				}
			} 												
			
			cout << " ";
		}
	}

	cout << endln;
	return 0;	
}