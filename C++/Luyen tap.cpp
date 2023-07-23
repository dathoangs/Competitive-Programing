#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define null NULL
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	ull s;

	cin >> s;

	if (s == 0){
		cout << 0;
		return 0;
	}

	ull ans = ceil(pow(s,0.5)) * 2;
	
	ull a = ceil(pow(s,0.5));
	ull b = ceil(pow(s,0.5));
	

	if (a*(b-1) >= s && b>0){
		ans--;
		b--;
	}
	
	if ((a-1)*b >= s && a>0){
		ans--;
		a--;
	}


	cout << ans;
}