#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define null NULL
using namespace std;
map <int, bool> mp;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	int n, tmp, ans = 0;

	cin >> n;
	while (n--){
		cin >> tmp;
		if (mp[tmp] == 0){
			ans++;
			mp[tmp] = 1;
		} 
	}
	cout << ans;
}