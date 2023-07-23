#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define null NULL
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	string s;
	cin >> s;
	
	int n, mx = INT_MAX, i1, i2;
	cin >> n;
	
	for (int i = 0; i<s.length()-1; i++){
		if (int(s[i]) + int(s[i+1]) < mx){
			i1 = i;
			i2 = i+1;
			mx = int(s[i]) + int(s[i+1]);
		}
	}
	
	if (int(s[i1]) > int(s[i2])){
		for (int i = 0; i<n; i++){
			if (i%2 == 0)
				cout << s[i2];
			else 
				cout << s[i1];
		}
	} else {
		for (int i = 0; i<n; i++){
			if (i%2 == 0)
				cout << s[i1];
			else 
				cout << s[i2];
		}		
	}
}


