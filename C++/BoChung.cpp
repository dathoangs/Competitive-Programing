#include <bits/stdc++.h>
using namespace std;
int n, mx;
vector <int> a;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	cin >> n;
	
	for (int i = 0; i<n; i++){
		int tmp;
		cin >> tmp;
		a.push_back(tmp);
	}
	sort(a.begin(),a.end());
	
	for (int i = 0; i<n-1; i++){
		for (int j = i+1; j<n; j++){
			if (__gcd(a[i],a[j]) > mx)
				mx = __gcd(a[i],a[j]);
		}
	}
	
	cout << mx;
}


