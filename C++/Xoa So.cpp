#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define null NULL
using namespace std;
int n, tmp, mx, ans;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	cin >> n;
	
	while (n>0){
		tmp = n;
		mx = 0;
		do {
			if (tmp % 10 > mx)
				mx = tmp % 10;
			tmp /= 10;
		} while (tmp != 0);
		
		n -= mx;
		ans++;		
	}
	
	cout << ans;
}


