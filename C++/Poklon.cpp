#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
vector <int> a;
vector <int> b;
vector <int> pre;
int n;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	cin >> n;
	a.resize(n+7);
	b.resize(n+7);
	
	for (int i = 0; i<n; i++){
		cin >> a[i];
		cin >> b[i];
	}
	
	for (int i = 0; i<n; i++){
		pre.push_back(b[i] - a[i]);
	}	
	
	for (int i = 0; i<n-1; i++){
		for (int j = i; j<n; j++){
			if (pre[i] < pre[j]){
				swap(a[i], a[j]);
				swap(b[i], b[j]);
				swap(pre[i], pre[j]);
			}
		}
	}
	
	
	cout << "\n";
	for (int i = 0; i<n; i++){
		cout << a[i] << " " << b[i] << "\n";
	}
}

























