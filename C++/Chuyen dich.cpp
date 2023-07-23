#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define null NULL
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	ll a, b, n;
	cin >> a >> b >> n;

	if (n == 0 && a == b){
		cout << "YES";
		return 0;
	} 

	if (n == 0 && a != b){
		cout << "NO";
		return 0;
	}

	if ((a+b) % 2 != 0){
		cout << "NO";
		return 0;
	}



	if ((a - ((a+b)/2)) / n >= 1){
		cout << "YES";
	} else {
		cout << "NO";
	}
}

a b n
7 1 2

4 4 
