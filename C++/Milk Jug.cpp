#include <bits/stdc++.h>
using namespace std;
int x,y,m;
int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	
	cin >> x;
	cin >> y;
	cin >> m;
	
	int time = m/x;
	int big = m/x * x;
	int bigg = 0;
	
	for (int i = 1; i<=time; i++){
		int tmp = big - x*i;
		while (tmp + y < m){
			tmp += y;
			if (tmp > bigg){
				bigg = tmp;
			}
		}
	}
	cout << bigg;
}


