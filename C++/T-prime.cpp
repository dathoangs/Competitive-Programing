#include <bits/stdc++.h>
using namespace std;
const int Max = 1000000+10;
vector <bool> chk(Max, true);
int t;
unsigned long long int n;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	chk[0] = false;
	chk[1] = false;
	for (int i = 2; i*i<Max; i++){
		if (chk[i]){
			for (int j = i*i; j<Max; j += i)
				chk[j] = false;
		}
	}
	
	cin >> t;
	
	for (int tt = 0; tt<t; tt++){
		cin >> n;
		if (sqrt(n) == int(sqrt(n)) && chk[(int)sqrt(n)])
			cout << "YES\n";
		else 
			cout << "NO\n";
	}
}
