#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pb push_back
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define for(a,i) for(int i = 0; i<a; i++)
#define null NULL
#define endln "\n"
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	string a, b;
	ll chk = 0;

	cin >> a >> b;

	for (a.length(), i){
		ll aa, bb;
		if ((int)a[i] > 90){
			aa = (int)a[i] - 32;
		} else {
			aa = (int)a[i];
		}

		if ((int)b[i] > 90){
			bb = (int)b[i] - 32;
		} else {
			bb = (int)b[i];
		}

		if (aa < bb){
			chk--;
			break;
		}

		if (aa > bb){
			chk++;
			break;
		}

	}

	cout << chk;
}