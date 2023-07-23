#include <bits/stdc++.h>
using namespace std;
int n, lmax, tmp;



int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	cin >> n;
	int x[n], y[n];
	for (int i = 0; i<n; i++){
		cin >> x[i];
	}
	
	for (int i = 0; i<n; i++){
		cin >> y[i];
	}
		
	int lmax = pow(x[0] - x[1] ,2) + pow(y[0] - y[1] ,2);
	
	for (int i = 0; i<n-1; i++){
		for (int j = i; j<n; j++){
			if (pow(x[i] - x[j] ,2) + pow(y[i] - y[j] ,2) > lmax)
				lmax = pow(x[i] - x[j] ,2) + pow(y[i] - y[j] ,2);
		}		
	}

	cout << lmax;	
}

