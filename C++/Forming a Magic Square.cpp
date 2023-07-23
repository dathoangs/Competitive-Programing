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

	int a[5][5], ans = 0;

	fore(i,0,3){
		fore(j,0,3){
			cin >> a[i][j];
		}
	}

	fore(i,0,)

	ans += abs(10 - (a[0][0] + a[2][2]));
	ans += abs(10 - (a[0][2] + a[2][0]));
	ans += abs(10 - (a[0][1] + a[2][1]));
	ans += abs(10 - (a[1][0] + a[1][2]));

	cout << ans;





	cout << endln;
	return 0;	
}