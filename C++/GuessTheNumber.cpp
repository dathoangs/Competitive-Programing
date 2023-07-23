#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define null NULL
using namespace std;
int n;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	cin >> n;
	int nguyen = n/2, du = n%2;
	
	if (nguyen % 2 == 0 && du == 1){
		cout << 2;
		return 0;
	}
	
	if (nguyen % 2 == 0 && du == 0){
		cout << 0;
		return 0;
	}	
	
	if (nguyen % 2 == 1 && du == 0){
		cout << 1;
		return 0;
	}	
	
	if (nguyen % 2 == 1 && du == 1){
		cout << 2;
		return 0;
	}		
}






















