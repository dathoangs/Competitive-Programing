#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
map <int, bool> pre;
int chk, b, d, c, l, i, j;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0); cin.tie(0);
	
	cin >> b >> d >> c >> l;
	
	while (b*i <= l){
		while (d*j <= l){
			cout << b << " " << d << "\n";
			if ((l - (b*i + d*j)) % c == 0){
				cout << i << " " << j << " " << (l - (b*i + d*j)) / c << "\n";
				chk++;
			}
			j++;
		}
		i++;
	}
	
	if (chk == 0){
		cout << "impossible";
	}
}


