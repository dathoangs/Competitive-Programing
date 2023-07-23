#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long

int count(int n){
	int dem = 0; 
	
	while (n>=10){
		n /= 10;
		dem++;
	}
	dem++;
	
	return dem;
}

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	cin >> t;
	
	while (t--){
		cin >> n;
		int tmp = count(n), times;
		
		for (int i = tmp-1; i>=1; i--){
			if (n / pow(10,i) != 0 || n / pow(10,i) != 1){
				
			}
		}
	}
}


