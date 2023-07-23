#include <bits/stdc++.h>
using namespace std;
string str;
int t;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	cin >> t;
	
	for (int tt = 0; tt<t; tt++){
		cin >> str;
		
		if (str.substr(str.length()-2, 2) == "po"){
			cout << "FILIPINO\n";
			continue;	
		}
		
		if (str.substr(str.length()-4, 4) == "desu" || str.substr(str.length()-4, 4) == "masu"){
			cout << "JAPANESE\n";
			continue;
		}
		
		if (str.substr(str.length()-5, 5) == "mnida"){
			cout << "KOREAN\n";
			continue;
		}
	}
}


