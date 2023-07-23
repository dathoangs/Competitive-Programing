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

	ll n, c, i = 0, j = 0, ab = 0, a = 0, b = 0, ans = 1;
	string s;

	cin >> n >> c >> s;

	if (s[0] == 'a'){
		a++;
	} else if (s[0] == 'b'){
		b++;
	}

	while (ab < c && j<n){
		j++;
		if (s[j] == 'a'){
			a++;
			ab = a*b;
		} else if (s[j] == 'b'){
			b++;
			ab = a*b;	
		}
		ans++;
	}

	while (ab > c){
		i++;
		if (s[i] == 'a'){
			a--;
			ab = a*b;
		} else if (s[i] == 'b'){
			b--;
			ab = a*b;	
		}
		ans--;
	}

	cout << ans;

	cout << endln;
	return 0;	
}