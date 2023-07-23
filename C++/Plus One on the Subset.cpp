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
	
	int t;
	cin >> t;

	while (t--){
		int n;
		vector <int> a;

		cin >> n;

		for (int i = 0; i<n; i++){
			int tmp;
			cin >> tmp;
			a.pb(tmp);
		}

		sort(a.begin(), a.end());

		cout << a[a.size() - 1] - a[0] << endln;
	}
}