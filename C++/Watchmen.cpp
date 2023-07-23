#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define null NULL
using namespace std;
int ans, mx1, mx2, n;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	cin >> n;
	vector <int> x(n);
	vector <int> y(n);
	
	for (int i = 0; i<n; i++){
		cin >> x[i];
		cin >> y[i];
	}
	
	sort (x.begin(), x.end());
	sort (y.begin(), y.end());	
	
	for (int i = 0; i<x.size(); i++){
		mx1++;	
		if (x[i] != x[i+1]){	
			ans += mx1*mx1/2 - mx1/2;
			mx1 = 0;
		}	
	}
	
	for (int i = 0; i<y.size(); i++){	
		mx2++;
		if (y[i] != y[i+1]){
			ans += mx2*mx2/2 - mx2/2;
			mx2 = 0;
		}
	}

	
	cout << ans;
}


