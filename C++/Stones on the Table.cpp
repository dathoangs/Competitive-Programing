#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define for(a,i) for(int i = 0; i<a;)
#define size(a) a.size()
#define length(a) a.length()
#define null NULL
#define endln "\n"
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	ll a, ans = 0;
	string s;

	cin >> a >> s;

	for (length(s), i){
		if (s[i+1] == s[i]){
			s.erase(i+1,1);
			ans++;
		} else {
			i++;
		}
	}	
	cout << ans;
}