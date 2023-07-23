#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
int n, l, r, tmp;
set <ll> pre;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	for (int i = 1; i<250; i++){
		for (int j = i; j<250; j++){
			tmp = (4*i+1) * (4*j+1);
			pre.insert(tmp);
		}
	}
	
	cin >> n;
	while (n != 0){
		cout << n << " ";// <<  << "\n";
		auto it = pre.lower_bound(n);
		cout << *it <<"\n";
		cin >> n;
	}
	
}


