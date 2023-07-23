#include <bits/stdc++.h>
using namespace std;
char alpha[26];
int tmp, t;
string s;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	for (int i = 0; i<26; i++){
		alpha[i] = 'a' + i;
	}
	
	cin >> t;
	
	while(t--)
	{
		tmp = 0;
		cin >> s;
		int n = s.size();
		
		vector <int> chk (123, 0);
		
		for (int i = 0; i<n; i++){
			for (int j = 0; j<n; j++){
				if (s[i] == alpha[j]){
					chk[(int)alpha[j]]++;
				}		
			}
		}
		
		for (int i = 97; i<97+n; i++){
			if (chk[i] != 1){
				tmp++;
				break;
			}
		}
		
		if (tmp == 1){
			cout << "NO" << "\n";
			continue;
		}
		
		for (int i = 1; i<n-1; i++)
		{
			if (s[i] >= s[i-1] && s[i] >= s[i+1]){
				tmp++;
				break;
			}
		}
		
		if (tmp == 1){
			cout << "NO" << "\n";
		} else {
			cout << "YES" << "\n";
		}
	}
	
}


