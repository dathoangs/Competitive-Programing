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
	freopen("input", "r", stdin);
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);

	ll n, p, m;

	cin >> n >> m >> p;

	vector <double> c(n), d(m);

	fore (i,0,n){
		cin >> c[i];
	} 

	fore (i,0,m){
		cin >> d[i];
	}

	fore (i,0,n-1){
		cout << 1;
		if ((c[i+1] - c[i]) / c[i] * 100 > p){
			cout << "Ride on!";
			return 0;
		}
	}

	fore (i,0,m-1){
		if ((d[i+1] - d[i]) / d[i] * 100 > p){
			cout << "Ride on!";
			return 0;
		}
	}

	cout << "Time to change gears!";	

	cout << endln;
	return 0;	
}