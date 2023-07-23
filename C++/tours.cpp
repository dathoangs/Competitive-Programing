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

	if (s[0] == s[n-2]){
		cout << 1 << " " << n-1 << " " << 2 << " " << n;
	} else {
		ll q, v;
		fore (i,1,n){
			if (s[0] == s[n-2-i]){
				q = i;
				break;
			}
		}

		fore (i,1,n){
			if (s[i] == s[n-2]){
				v = i;
				break;
			}
		}

		if (q < v){
			cout << 1 << " " << n-1-q << " " << 2 << " " << n-q;
		} else {
			
		}


	}

	cout << endln;
	return 0;	
}