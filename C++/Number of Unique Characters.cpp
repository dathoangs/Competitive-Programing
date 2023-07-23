#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define null NULL
using namespace std;

int cong(int n){
	int tong = 0;
	while (n){
		tong += n;
		n--;
	};
	return tong;
}

string s;
int n;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	cin >> n;

	while (n--){
		cin >> s;
		int res = 0;
		vector <int> a(27,0);
		for (int i = 0; i<s.length(); i++){
			a[int(s[i])-97]++; 
		}
		
		for (int i = 0; i<s.length(); i++){
			int tmp = 0;
			for (int j = 0; j<a.size(); j++){
				if (a[j] == 1){
					tmp++;
				}
			}
			res += cong(tmp);
			// cout << cong(tmp) << "\n";
			a[int(s[i])-97]--;
		}

		cout << res << "\n";
	}
}
