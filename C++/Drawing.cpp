#include <bits/stdc++.h>
using namespace std;
vector <int> a;
int tmp;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	for(int i = 0; i<4; i++){
		cin >> tmp;
		a.push_back(tmp);
	}
	sort(a.begin(), a.end());
	
	int l = a[3] - a[0];
	if (a[2] - a[1] == 0 || a[2] - a[1] == 1 || a[0] == a[1] || a[2] == a[3]){
		cout << l;
	}
	else cout << l - (a[2] - a[1]);
	
}


