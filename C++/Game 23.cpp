#include <bits/stdc++.h>
using namespace std;
int n, m;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	cin >> n >> m;
		
	if (m % n != 0)
		cout << -1;
	else
	{
		int chk = 0, t = m / n;
		while (t % 2 == 0){
			chk++;
			t /= 2;
		}
			
		while (t % 3 == 0){
			chk++;
			t /= 3;
		}
			
		if (t != 1)
			cout << -1;
		else
			cout << chk;
	}
}


