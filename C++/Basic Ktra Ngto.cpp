#include <bits/stdc++.h>
using namespace std;
int n, tmp;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	cin >> n;
	
	for (int i = 2; i<n/2; i++){	
		if (n % i == 0){
			cout << "NO";
			tmp++;
			break;
		} 
	}
	
	if (tmp == 0){
		cout << "YES";
	}
}


