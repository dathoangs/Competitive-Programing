#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define fore(i,b,a) for(int i = b; i<a; i++)
#define null NULL
#define endln "\n"
using namespace std;

int main() {
   	// freopen("input", "r", stdin);
    ios::sync_with_stdio(0);
    cout.tie(0); cin.tie(0);

	string s;
	
	cin >> s;
	
	ll n = s.length(), chk = 0;
	
	fore(i,0,n){
		if (chk == 0 && s[i] == 'h') {chk++; continue;}
		if (chk == 1 && s[i] == 'e') {chk++; continue;}
		if (chk == 2 && s[i] == 'l') {chk++; continue;}
		if (chk == 3 && s[i] == 'l') {chk++; continue;}
		if (chk == 4 && s[i] == 'o') {chk++; continue;}
		if (chk == 5) {break;}
	}
	
	if (chk == 5){
		cout << "YES";
	} else {
		cout << "NO";
	}

    cout << endln;
    return 0;
}

