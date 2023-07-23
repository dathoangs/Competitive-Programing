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
	// freopen("input", "r", stdin);
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	ll c, n, cur = 0;

	cin >> c >> n;

	ll a[n][3];

	fore (i,0,n){
		fore (j,0,3){
			cin >> a[i][j];
		}
	}

	if (a[n-1][2] > 0){
		cout << "impossible";
		return 0;
	}

	fore (i,0,n){
		if (cur - a[i][0] < 0){
			cout << "impossible";
			return 0;
		}
		cur-=a[i][0];		
		if (cur + a[i][1] > c){
			cout << "impossible";
			return 0;			
		}
		cur+=a[i][1];		
		if (a[i][2] > 0 && cur < c){
			cout << "impossible";
			return 0;			
		}

	}

	if (cur != 0){
		cout << "impossible";
		return 0;	
	}

	cout << "possible";

	cout << endln;
	return 0;	
}