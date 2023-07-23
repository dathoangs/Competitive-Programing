#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define null NULL
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	int t;
	
	cin >> t;
	
	while (t--){
		int n, i1 = 0, i2 = 0;
		string s1, s2;
		cin >> n;
		for (int i = 0; i<n; i++)
			cin >> s1[i];
			
		for (int i = 0; i<n; i++)
			cin >> s2[i];
		
		while(s1[i1] > s2[0]){
			i1++;
		}
		
		while(s2[i2] < s1[0]){
			i2++;
		}		
		
		if (i1 < i2){
			cout << i1 << "\n";
		} else {
			cout << i2 << "\n";
		}
		
		
	}
}


