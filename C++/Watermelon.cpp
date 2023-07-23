#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define null NULL
#define endln "\n"
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	int n;
	cin >> n;

	if (n == 2) {
		cout << "NO";
		return 0;
	}
	if (n % 2 == 0 ){
		cout << "YES";
	} else {
		cout << "NO";
	}
}