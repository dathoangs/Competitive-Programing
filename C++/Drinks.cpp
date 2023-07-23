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

	ull n, p = 0, tmp;

	cin >> n;

	fore(i,0,n){
		cin >> tmp;
		p += tmp;
	}

	cout << (p*1.0)/n;

	cout << endln;
	return 0;	
}