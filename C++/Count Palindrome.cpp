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
	int ans = 0;

	for (int i = 0; i<s.length(); i++){
		for (int j = s.length()-1; j>=i; j--){
			bool chk = 0;			
			for (int k = 0; k<=(j-i)/2; k++){
				if (s[i+k] != s[j-k]){
					chk = 1;
					break;
				}
			}
			if (chk == 0){
				ans++;
			}
		}
	}

	cout << ans;
}