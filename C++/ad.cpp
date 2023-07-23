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
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	string s1, s2, s3, s4;
	int a, c, ans = 0;
	string b, d;

	cin >> s1 >> s2 >> s3 >> s4;

	if (s1 == "AD"){
		a = s1;
		b = stoi(s2);
	} else {
		a = s2;
		b = -(stoi(s1));
	}

	if (s3 == "AD"){
		c = s3;
		d = stoi(s4);
	} else {
		c = s4;
		d = -(stoi(s3));
	}

	if ()

	cout << endln;
	return 0;	
}