#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
vector <char> stck;
string s;
int expc, ans;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	cin >> s;
	
	for (int i = 0; i<s.length(); i++){
		stck.clear();
		expc = 0;
		
		do {
			stck.push_back(s[i]);
			if (stck[stck.size()-1] != s[i+1] && stck[stck.size()-1] == s[i+2]) {
				i++;
				break;
			}
		} while (stck[stck.size()-1] != s[i] && stck.size() < ( s.length() - i)/ 2); 
	}
	
	for (int i = 0; i<stck.size(); i++){
		cout << stck[i] << " ";
	}
}


