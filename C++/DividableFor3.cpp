#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define null NULL
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	int l, r, i, ans = 0;
	cin >> l >> r;
	i = l;
	
	while (i<r && i%3 != 0){
		i++;
	}
	
	for (; i<=r; i+=3){
		ans++;
	}
	
	cout << ans;
}


