#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define null NULL
using namespace std;
string s;
char x;
int i, ans;


int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	cin >> s >> x;
	sort(s.begin(), s.end());
	
	while (s[i] != x)
		i++;
		
	while (s[i] == x){
		ans++;
		i++;
	}
	
	cout << ans;
}



















