#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
string s;
int a[3] = {1, 0, 0};

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	cin >> s;
	for (int i = 0; i<s.length(); i++){
		if (s[i] == 'A')
			swap(a[0], a[1]);
		if (s[i] == 'B')
			swap(a[1], a[2]);
		if (s[i] == 'C')
			swap(a[0], a[2]);
	}
	
	for (int i = 0; i<3; i++){
		if (a[i] == 1){
			cout << i+1;
			break;
		}
	}
	
}


