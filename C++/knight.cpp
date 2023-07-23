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

	string s;

	cin >> s;

	int a, b, ans = 0;

	a = s[0] - 96;
	b = s[1] - 48;

	if (a-1 >= 1 && b+2 <= 8) ans++;
	if (a-2 >= 1 && b+1 <= 8) ans++;

	if (a-1 >= 1 && b-2 >= 1) ans++;
	if (a-2 >= 1 && b-1 >= 1) ans++;

	if (a+1 <= 8 && b+2 <= 8) ans++;
	if (a+2 <= 8 && b+1 <= 8) ans++;

	if (a+1 <= 8 && b-2 >= 1) ans++;
	if (a+2 <= 8 && b-1 >= 1) ans++;

	cout << ans;

	cout << endln;
	return 0;	
}