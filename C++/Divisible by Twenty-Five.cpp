#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
string s;
int ans;
vector <int> a;
vector <int> b;
void thayX(int tmp){
	for (int i = 0; i<b.size(); i++){
		a[b[i]] = tmp;
	}
}
void thay_(){
	
}
int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	cin >> s;
	for (int i = 0; i<s.length(); i++){
		if (s[i] == '_') a.push_back(i);
		if (s[i] == 'X') b.push_back(i);
	}
	
	if (b.size() == 0){
		
	}
}

















