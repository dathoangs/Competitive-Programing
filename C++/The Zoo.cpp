#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define null NULL
using namespace std;
int n, res;
string s;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	cin >> n;

	while (n--){
		res = 0;
		cin >> s;
		vector <int> a(27,0);
		vector <int> b;
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
			b.push_back(tmp);
			a[int(s[i])-97]--;
		}

		for (int i = 0; i<b.size(); i++){
			cout << b[i] << " ";
		}

		for (int i = 0; i<b.size(); i++){
			res += b[i];
		}
		int tmp = res;
		for (int i = 0; i<b.size(); i++){
			tmp -= b[i];
			res += tmp;
		}
		cout << res << "\n";
	}	


}