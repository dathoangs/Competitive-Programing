#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int n;
vector <int> a;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	cin >> n;
	a.resize(n+7);
	
	for (int i = 0; i<n; i++){
		cin >> a[i];
	}
	
	for (int i = 0; i<n-3; i++){
		for (int j = i; j<n-2; j++){
			int tmp = a[i] + a[j];
			int l = j+1, r= n-1, mid = (l+r)/2;
			while (l != r){
				
			}
		}
	}
}


